#include <stdio.h>
int main() {
    int sides;    
    printf("Enter the number of sides (3-10): ");
    scanf("%d", &sides);   
    switch(sides) {
        case 3:
            printf("Shape: Triangle\n");
            break;
        case 4:
            printf("Shape: Quadrilateral\n");
            break;
        case 5:
            printf("Shape: Pentagon\n");
            break;
        case 6:
            printf("Shape: Hexagon\n");
            break;
        case 7:
            printf("Shape: Heptagon\n");
            break;
        case 8:
            printf("Shape: Octagon\n");
            break;
        case 9:
            printf("Shape: Nonagon\n");
            break;
        case 10:
            printf("Shape: Decagon\n");
            break;
        default:
            printf("Unknown shape for that number of sides.\n");
    }    
    return 0;
}
