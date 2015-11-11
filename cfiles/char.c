#include<stdio.h>

int main(int argc, char *arg[])
{
    int i;

    if( argc == 0)
    {
        printf("There are no cmd line arguments to print...!\n");
    }
    else
    {
          for(i = 0; i < argc; i++)
              printf("%s\n", arg[i]);
    }
    return 0;
}
