#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void encrypt(char [],int);
void decrypt(char [],int);

int main()
{
	char a[1000];
	int key;

	printf("\nEnter a string: ");
	gets(a);

	printf("\nThe plane text is: %s\n",a);

	printf("\nEnter the key: ");
	scanf("%d",&key);
	if(key>26)
	{
		key=key%26;
	}

	encrypt(a,key);

	return 0;
}


void encrypt(char a[],int key)
{
	int i,key1;
	char b[1000];

	key1=key;

	for(i=0;i<strlen(a);i++)
	{
		if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122) || (a[i]>=48 && a[i]<=57))
		{
			if(a[i]>=65 && a[i]<=90)
			{
				b[i]=(a[i]+key)%91;
				if(b[i]<65)
				{
					b[i]=65+(b[i]);
				}
			}

			else if(a[i]>=97 && a[i]<=122)
			{
				b[i]=(a[i]+key)%123;
				if(b[i]<97)
				{
					b[i]=97+b[i];
				}
			}

			else
			{
				if(key1>10)
				{
					key1=key1%10;
				}

				b[i]=(a[i]+key1)%58;

				if(b[i]<48)
				{
					b[i]=48+b[i];
				}
			}
		}

		else
		{
			b[i]=a[i];
		}
	}

	b[i]='\0';

	printf("\nThe Encrypted string is: ");
	for(i=0;b[i]!='\0';i++)
	{
		printf("%c",b[i]);
	}
	printf("\n\n");

	decrypt(b,key);
}


void decrypt(char b[],int key)
{
	int i,key1,diff;
	char c[1000];

	key1=key;

	for(i=0;i<strlen(b);i++)
	{
		if((b[i]>=65 && b[i]<=90) || (b[i]>=97 && b[i]<=122) || (b[i]>=48 && b[i]<=57))
		{
			if(b[i]>=65 && b[i]<=90)
			{
				c[i]=(b[i]-key)%91;
				if(c[i]<65)
				{
					diff=65-c[i];
					c[i]=91-diff;
				}
			}

			else if(b[i]>=97 && b[i]<=122)
			{
				c[i]=(b[i]-key)%123;
				if(c[i]<97)
				{
					diff=97-c[i];
					c[i]=123-diff;
				}
			}

			else
			{
				if(key1>10)
				{
					key1=key1%10;
				}

				c[i]=(b[i]-key1)%58;

				if(c[i]<48)
				{
					diff=48-c[i];
					c[i]=58-diff;
				}
			}
		}

		else
		{
			c[i]=b[i];
		}
	}

	c[i]='\0';

	printf("\nThe Decrypted string is: ");
	for(i=0;c[i]!='\0';i++)
	{
		printf("%c",c[i]);
	}
	printf("\n");
}
