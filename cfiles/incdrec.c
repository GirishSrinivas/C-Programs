#include<stdio.h>
int main()
{
    int a = 100;
    int b = 20;
    int res;

    res = (a < b) ? a: b;
    printf("the value of res: %d\n", res);
    
    return 0;
}
