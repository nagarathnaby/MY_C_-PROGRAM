#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if (a == 0) {
        printf("Not a quadratic equation. 'a' must not be zero.\n");
        return 0;
    }
    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0){
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are REAL and DISTINCT.\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are REAL and EQUAL.\n");
        printf("Root = %.2f\n", root1);
    } else {
        float real = -b / (2 * a);
        float imag = sqrt(-discriminant) / (2 * a);
        printf("Roots are COMPLEX and IMAGINARY.\n");
        printf("Root1 = %.2f + %.2fi\n", real, imag);
        printf("Root2 = %.2f - %.2fi\n", real, imag);
    }
}
