#include <stdio.h>
#include <math.h>
int main ()
{
    double x1, x2, x3, mean, var, stvar;
    printf("enter value of x1 x2 x3");
    scanf("%lf %lf %lf", &x1, &x2, &x3);
    mean = (x1 + x2 + x3)/3;
    var = ((x1 - mean)*(x1-mean)+(x2-mean)*(x2-mean)+(x3-mean)*(x3-mean))/3;
    stvar = sqrt(var);
    printf("Mean = %.2lf\n", mean);
    printf("Variance = %.2lf\n", var);
    printf("Standard Deviation =%.2lf\n", stvar);
    return 0;
}