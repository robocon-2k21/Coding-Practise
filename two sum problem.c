#include <stdio.h>
#include <conio.h>

void main()
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
         printf("true");

      }
      break;
      }

    }
    getch();
}
