#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   clrscr();
   int n,res,root,i,j;
   printf("Enter coins =");
   scanf("%d",&n);
   root=sqrt(8*n+1);
   res=(root-1)/2 ;
  // printf("%d\n",res);
   for(i=1;i<=res;++i)
   {
   for(j=1;j<=i;++j)

     printf("* ");
     printf("\n");
   }
   printf("Complete rows = %d",res);
   getch();
}