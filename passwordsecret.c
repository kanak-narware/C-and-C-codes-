#include <stdio.h>
#include <termios.h>
#include <unistd.h>

#define MAX_LENGTH 100

// Helper function to read a character without echoing
char getch_linux() {
    char ch;
    struct termios old_opts, new_opts;

    // Get current terminal settings
    tcgetattr(STDIN_FILENO, &old_opts);
    new_opts = old_opts;

    // Disable canonical mode (buffered input) and echoing
    new_opts.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &new_opts);

    // Read a single character
    ch = getchar();

    // Restore original terminal settings
    tcsetattr(STDIN_FILENO, TCSANOW, &old_opts);
    return ch;
}

int main() {
    char password[MAX_LENGTH];
    char ch;
    int i = 0;

    printf("Enter your input: ");

    while (i < MAX_LENGTH - 1) {
        ch = getch_linux();

        // Check for Enter key
        if (ch == '\n' || ch == '\r') {
            break;
        }

        // Handle Backspace
        if (ch == 8 || ch == 127) {
            if (i > 0) {
                i--;
                printf("\b \b"); // Move back, write space to erase, move back again
                fflush(stdout);
            }
        } 
        // Handle normal characters
        else {
            password[i++] = ch;
            printf("*");
            fflush(stdout); // Force immediate rendering of the asterisk
        }
    }

    password[i] = '\0'; // Null-terminate the string

    printf("\n\nYou entered: %s\n", password);
    return 0;
}
