#include<stdio.h>

int main()
{
    char *ch;
    char ch1, ch2;

    printf("Enter a string: ");
    scanf("%c", &ch);

    printf("The entered string is: %c\n", *ch);

    return 0;
}
