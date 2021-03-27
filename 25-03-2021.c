#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,c=0,i=0,k=0;
	printf("enter the number ");
    scanf("%d",&n);

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			printf("* ");
			c++;

			if(c==n)
			{
				break;
			}
		}
		if(c==n)
			{
				break;
			}
		printf("\n");
			k++;
	}
	printf("\n%d\n",k);

    //printf("Hello world!\n");
    return 0;
}
