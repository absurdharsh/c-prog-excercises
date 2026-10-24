#include <stdio.h>
#include <math.h>
int main ()
{
    double a,b,c,x,y;
    printf("enter the value of coeffs a b c");
    scanf("%lf %lf %lf", &a, &b, &c);
    x=(-b+sqrt((b*b)-4*a*c))/(2*a);
    y=(-b-sqrt((b*b)-4*a*c))/(2*a);
    printf("Root1 = %.2lf\n", x);
    printf("Root2 = %.2lf\n", y);
    return 0;
}