#include<stdio.h>

void bubbleSort(int n, int []);

int main()
{
    int n, i ;
    int a[100];

    printf("Enter the size of an array: ");
    scanf("%d", &n);

    printf("Enter %d elements into the array\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    bubbleSort(n, a);

    return 0;
}

void bubbleSort(int n, int a[])
{
    int i, j, temp;

    for(i = 0; i < (n - 1); i++)
    {
        for(j = 0; j < (n - 1 - i); j++)
        {
            if(a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("The sorted array is: \n");
    for(i = 0; i < n; i++)
      printf("%d\n", a[i]);
}
