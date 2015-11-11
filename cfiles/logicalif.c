#include<stdio.h>

int main()
{
    int a = 100;
    int b = 2000;
    int c = 30;

    if((a > b) && (a > c))
        printf("A is the greatest!!!\n");

    else if(b > c)
        printf("B is the greatest!!!\n");

    else
        printf("C is the greatest!!!\n");

    return 0;
}
