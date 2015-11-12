#include<stdio.h>

int main()
{
    int *p, *q;
    int num = 10;
    int count;
    int *np;
    p = &num;
    q = p;
    //*q = *q + 1;
    //count = *p;
    printf("\nThe address held in pointer variable 'np' is: %p\n", np);
    //printf("The value held in pointer variable 'np' is: %d\n", *np);
    printf("The address held in pointer variable 'q' is: %p\n", q);
    q++;
    printf("The address held in pointer variable 'q' after increment is: %p\n", q);
    printf("The value of the integer pointed by '*p' is: %d\n", *p);
    printf("The value of the integer pointed by '*q' is: %d\n", *q);
    printf("The address held in variable 'p' is: %p\n", p);
    printf("The address of variable 'num' is: %p\n", &num);
    printf("The value of variable 'count' is: %d\n", count);
    *p = *p+1;

    printf("The value of variable 'count' is: %d\n", count);
    printf("The value of the integer after increment is: %d\n\n", *p);

    return 0;
}
