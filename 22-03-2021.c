#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int a[10]={};
    int b[10]={};
    int sum[5];
    int e,carry=0;
    char c[10]="";
    char d[10]="";

    printf("enter the number of bit for first binary numb");
	scanf("%s",&c);

	printf("enter the number of bit for second binary numb");
	scanf("%s",&d);

	for(int i=0; i<strlen(c); i++)
    {
        a[i]=(int)c[i]-48;
        printf("\na=%d",a[i]);
    }

    for(int i=0; i<strlen(d); i++)
    {
        b[i]=(int)d[i]-48;
        printf("\nb=%d\n",b[i]);
    }

    if(strlen(c)>=strlen(d))
    {
        e=strlen(c);
    }

    if(strlen(d)>=strlen(c))
    {
        e=strlen(d);
    }

    printf("\ne=%d\n",e);

	for(int i=(e-1); i!=-1; i--)
	{
		if((a[i]==1 && b[i]==0 && carry==0) || (a[i]==0 && b[i]==1 && carry==0) || (a[i]==0 && b[i]==0 && carry==1))
		{
			sum[i]=1;
			carry=0;

			if(i==(0))
			{
				sum[-1]=carry;
			}
			continue;
		}

			if((a[i]==1 && b[i]==1 && carry==0) || (a[i]==0 && b[i]==1 && carry==1) || (a[i]==1 && b[i]==0 && carry==1))
		{

			sum[0]=0;
			carry=1;

			if(i==0)
			{
				sum[-1]=carry;
			}
			continue;
		}

			if((a[i]==1 && b[i]==1 && carry==1))
		{
				sum[i]=1;
				carry=1;

				if(i==0)
			{
				sum[-1]=carry;
			}
			continue;
		}

		if((a[i]==0 && b[i]==0 && carry==0))
		{
				sum[i]=0;
				carry=0;

				if(i==0)
			{
				sum[-1]=carry;
			}
			continue;
		}


	}

		for(int j=-1; j<e; j++)
		{
			printf("%d ",sum[j]);
			//c++;
		}

//    printf("Hello world!\n");
    return 0;
}
