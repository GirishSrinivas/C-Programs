#include<stdio.h>

int main()
{

    int a = 9;
    int b = 1;
    int c = 6;

    if(a > b)
    {
        if(a >c)
        {
            printf("a is greatest!!!\n");
        }
    }
    else
    {
        if(b > c)
        {
            printf("B is the greatest!!!\n");
        }
        else
        {
            printf("C is the greatest!!!\n");
        }
    }
    return 0;
}
