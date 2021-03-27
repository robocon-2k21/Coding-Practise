#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[10]="";
	char b[10]="";
	char c[10]="";
	int k=0,l=0;

	printf("enter the string ");
	gets(a);
	strcpy(b,a);
	puts(a);
	puts(b);
	for(int i=0;i<(strlen(a));i++)
	{
		for(int j=i+1;j<(strlen(a));j++)
		{
			if(a[i]==a[j])
			{
				b[i]=" ";
			    b[j]=" ";
			}

		}
	}

	printf("%d\n",strlen(b));
	puts(b);

	for(int i=0; i<strlen(b); i++)
	{
		if((int)b[i]>=97 && (int)b[i]<=122)
		{
			c[l]=b[i];
			l++;
		}
	}
	printf("%d",strlen(c));


    printf("Hello world!\n");
    return 0;
}
