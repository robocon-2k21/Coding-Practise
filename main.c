#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,j,i=0;
    char c[5]="";

    printf("enter the number");
    scanf("%d",&n);
    while(n)
    {
    j = 65 + (n-1)%26 ;

    c[i]=(char)j;

    n=(n)/26;
    i++;
    }
    puts(strrev(c));
    //printf("%s",strrev(c));
    //printf("Hello world! from patel soham\n");
    return 0;
}
