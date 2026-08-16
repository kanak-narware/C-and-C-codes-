#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a single random IPv4 address string
void generate_ip(char *ip_buffer) {
    // Each octet must be between 0 and 255
    int octet1 = rand() % 256;
    int octet2 = rand() % 256;
    int octet3 = rand() % 256;
    int octet4 = rand() % 256;

    // Format the octets into a dotted-decimal string
    sprintf(ip_buffer, "%d.%d.%d.%d", octet1, octet2, octet3, octet4);
}

int main() {
    srand((unsigned int)time(NULL));

    char ip_address[16]; 
    int count = 5;       

    printf("Generating %d random IPv4 Addresses:\n", count);
    printf("------------------------------------\n");

    for (int i = 0; i < count; i++) {
        generate_ip(ip_address);
        printf("%d: %s\n", i + 1, ip_address);
    }

    return 0;
}
