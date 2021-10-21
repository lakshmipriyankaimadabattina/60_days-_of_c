

#include<stdio.h>

#include<math.h>

int main()
{
    float a, b, c, discriminant, real;
    double r1, r2, imag;

    printf("Enter coefficients a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are: %.2f and %.2f", r1, r2);
    }
    else if (discriminant == 0)
    {
        r1 = r2 = -b / (2 * a);
        printf("Roots are: %.2f and %.2f",r1, r2);
    }
    else
    {
        real = -b / (2 * a);
        imag = sqrt(-discriminant) / (2 * a);
        printf("Roots : %.2f+%.2fi and %.2f-%.2fi", real, imag, real, imag);
    }
    return 0;
}
/*Program to find the roots of a quadratic equation.
 if else
day_12*/
