#include <stdio.h>
int main ()
{
    int n1, n2, a, b;
    printf("enter n1 and n2");
    scanf("%d %d", &n1, &n2);
    a=n1+n2;
    b=n1-n2;
    printf("Sum: %d\n", a);
    printf("Subtraction: %d\n", b);
    return 0;
}