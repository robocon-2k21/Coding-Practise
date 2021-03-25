#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sum(char [], char [], char []);

int main()
{
    char a[10], b[10], result[10];
    int len1, len2, check;

    printf("Enter binary number 1: ");
    scanf("%s", a);
    printf("Enter binary number 2: ");
    scanf("%s", b);
    sum(a, b, result);
    printf("%s + %s = %s\n", a, b, result);

    return 0;
}

void sum(char a[],char b[],char result[])
{
    int i=strlen(a) ;
    int j=strlen(b) ;
    int carry=0,temp, num1, num2;

    while(i>0 && j>0)
    {
        num1=a[i];
        num2=b[j];
        temp=num1+num2+carry;
        if(temp/2==1)
        {
            carry=1;
        }
        if(i>j)
        {
            result[i+1]=temp;
            result[strlen(a)+1]='\0';
        }
        else
        {
            result[j +1] = temp ;
            result[strlen(b) + 1] = '\0';
        }
        j--;
        i--;
    }
    while(i>0)
    {
        temp=a[i]+carry;
        if (temp/2==1)
        {
            carry=1;
            temp%=2;
        }
        result[i+1]=temp;
        i--;
    }
    while(j>0)
    {
        temp=b[i]+carry;
        if (temp/2==1)
        {
            carry=1;
            temp%=2;
        }
        result[j+1]=temp;
        j--;
    }
    if(carry)
    {
        result[0]='1';
    }
    else
    {
        result[0]='0';
    }
}
