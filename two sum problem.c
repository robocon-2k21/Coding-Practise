#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10]={2,7,11,15};
    int sum=0,i,j;
    for(i=0;i<4;i++)
    {
      for(j=0;j<4;j++)
      {
      sum=a[j]+a[i];
      if(sum==9)
      {
          printf("sum of %d+%d=%d 1 \n ",a[j],a[i],sum);
      }
      else
      {
           printf("sum of %d+%d=%d  0 \n ",a[j],a[i],sum);
      }
    }
    }
    return 0;
}
