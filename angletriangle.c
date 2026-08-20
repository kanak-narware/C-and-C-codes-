#include <stdio.h>

int main() {
    float angle1, angle2, angle3, sum;
    printf("Enter the three angles of the triangle: ");
    if (scanf("%f %f %f", &angle1, &angle2, &angle3) != 3) {
        printf("Invalid input. Please enter numbers.\n");
        return 1;
    }
    sum = angle1 + angle2 + angle3;
    if (sum == 180.0f && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("The triangle is VALID.\n");
    } else {
        printf("The triangle is INVALID.\n");
    }

    return 0;
}
