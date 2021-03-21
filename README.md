# Coding-Practise
For Practice of Coding
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numb[4];//={4,5,4,9};
    int sum;
    int flag=0;

    for(int i=0; i<4; i++)
    {
        printf("enter the %d number \n",i+1);
        scanf("%d",&numb[i]);

    }
    for(int i=0 ; i<3 ;i++)
    {
        sum=numb[i]+numb[i+1];
        if(sum==9)
        {
            flag=1;
        }
    }

    if(flag==1)
    {
        return 1;
    }


    else
    {
         return 0;
    }
