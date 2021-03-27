#include <stdio.h>
#include <stdlib.h>


int main()
{
        int n;
        printf("Enter number\n");
        scanf("%d",&n);
        int i=1;
        while(n>0)
        {
            n=n-i;
            i++;
        }
        if(n==0)
        return i-1;
        else return i-2;
}
