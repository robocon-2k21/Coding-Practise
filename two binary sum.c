#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n1=0,n2=0,sum=0,carry=0,newnumber=0;

    printf("enter two binary numbers:\n");
    scanf("%d ",&n1);
    scanf("%d",&n2);

    int i=0;

    while(n1 !=0 | n2!=0)
    {
        if((n1%10==0) && (n2%10==0) && (carry==0))
        {
            sum=0;
            carry=0;
        }
         else if((n1%10==0) && (n2%10==0) && (carry==1))
        {
            sum=1;
            carry=0;
        }
        else if((n1%10==0) && (n2%10==1) && (carry==0))
        {
            sum=1;
            carry=0;
        }
         else if((n1%10==0) && (n2%10==1) && (carry==1))
        {
            sum=0;
            carry=1;
        }
        else if((n1%10==1) && (n2%10==0) && (carry==0))
        {
            sum=1;
            carry=0;
        }
        else if((n1%10==1) && (n2%10==0) && (carry==1))
        {
            sum=0;
            carry=1;
        }
        else if((n1%10==1) && (n2%10==1) && (carry==0))
        {
            sum=0;
            carry=1;
        }
       else if((n1%10==1) && (n2%10==1) && (carry==1))
        {
            sum=1;
            carry=1;
        }
        newnumber += sum*pow(10,i);
        i++;
        n1/=10;
        n2/=10;

    }
    if(carry==1)
        newnumber += pow(10,i);
    printf("%d\n",newnumber);

    return 0;

}
