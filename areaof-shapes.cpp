#include <stdio.h>
int main ()
{
    float a,b,area;
    int choice;
    printf("press 1 for Rectangle\n");
    printf("Press 2 for circle\n");
    printf("press 3 for triangle\n");
    printf("press 4 for square\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("length of rectangle =");
        scanf("%f", &a);
        printf("breadth of rectangle =");
        scanf("%f", &b);
        area=a*b;
        printf("area of rectangle is = %f", area);
        break;
    case 2:
        printf("radius of circle =");
        scanf("%f", &a);
        area=3.14*a*a;
        printf("area of circle is = %f", area);
        break;
    case 3:
        printf("height of triangle =");
        scanf("%f", &a);
        printf("base of triangle =");
        scanf("%f", &b);
        area = 0.5*a*b;
        printf("area of triangle is = %f", area);
        break;
    case 4:
        printf("side of square");
        scanf("%f", &a);
        area = a*a;
        printf("area of square is = %f", area);
        break;
    default:
        printf("invalid choice");
        break;
    }
    return 0;

}