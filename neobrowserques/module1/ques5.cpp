#include <stdio.h>
#include <math.h>
int main ()
{
    double real1, img1, real2, img2, a, b;
    printf("enter the value of real value and imaginary value of number 1\n");
    printf("enter the value of real value and imaginary value of number 2\n");
    scanf("%lf %lf %lf %lf", &real1, &img1, &real2, &img2);
    a = real1+real2;
    b = img1+img2;
    printf("Sum = %.2lf + %.2lfi", a, b);
    return 0;
}