#include<stdio.h>

int main(void)
{
    int a = 150;
    int b = 400;
    int c = 98;

    if(a > b)
    {
        if(a > c)
        {
            printf("A is the greatest!!!\n");
        }
    }
    else if(b > c)
    {
        printf("B is greatest!!!\n");
    }
    else
    {
        printf("C is the greatest!!!\n");
    }

    return 0;
}
