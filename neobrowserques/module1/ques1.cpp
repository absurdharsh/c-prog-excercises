#include <stdio.h>
int main ()
{
    int x,y,z,w;
    int a,b;
    printf("Enter values of x y z w");
    scanf("%d %d %d %d", &x, &y, &z, &w);
    a=x+y*z/w;
    b=(x+y)*(z/w);
    printf("Result of expression 1: %d\n", a);
    printf("Result of expression 2: %d\n", b);
    return 0;
}