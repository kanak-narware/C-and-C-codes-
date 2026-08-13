#include <stdio.h>
#include <math.h> 

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input. Please enter three numbers.\n");
        return 1;
    }
    if (a == 0) {
        if (b != 0) {
            printf("Linear equation detected. One root: %.2f\n", -c / b);
        } else {
            printf("Invalid equation (both a and b are zero).\n");
        }
        return 0;
    }
    discriminant = (b * b) - (4 * a * c);
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and distinct.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
