#include<stdio.h>

int main()
{
    int a, b, res;

    printf("Enter 2 operands\n");
    printf("Enter first operand: ");
    scanf("%d", &a);

    printf("\nEnter second operand: ");
    scanf("%d", &b);

    res = a-b;

    if(res >= 0)
    {
        printf("The result is positive\n");
    }
    else
    {
        printf("The result is negative\n");
    }

    printf("Exited the if condition\n");
    printf("End of Main() method\n");
    return 0;
}
