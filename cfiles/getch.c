#include<stdio.h>
int main(void)
{
    for(; ;)
    {
        int c = getchar();
        if(c == EOF)
          break;
        else
          printf("c = %d\n", c);
    }
}
