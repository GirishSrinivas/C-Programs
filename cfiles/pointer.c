#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int *a = malloc(sizeof(int)*100);
    int *b = malloc(sizeof(int)*100);
    int n, seed, i;

    if(argc == 3)
    {
          n = atoi(argv[1]);
          seed = atoi(argv[2]);


          srand(seed);

          for(i = 0; i < n; i++)
          {
              a[i] = rand()%1000;
              b[i] = a[i];
          }

          printf("The first array elements are:\n");
          for(i = 0; i < n; i++)
            printf("%d\n", a[i]);

          printf("The second array elements are:\n");
          for(i = 0; i < n; i++)
            printf("%d\n", b[i]);
    }
    else
    {
        printf("Invalid number of arguments to the program!!!...\n");
        exit(0);
    }

    return 0;
}
/*

*/
