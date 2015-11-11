#include<stdio.h>

int main()
{
    double x = 10.123, y;
    int *p;

    printf("the value of double 'x' is: %f\n", x);
    p = (int *)&x;
    printf("The value of integer pointer 'p' is: %d\n", *p);
    y = *p;
    printf("The value of double 'y' is: %f\n", y);

    return 0;
}
