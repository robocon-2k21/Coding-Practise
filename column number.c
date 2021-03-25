#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>


void main()
{
   char a[17579];
   int i=0,column_no,k;
   printf("enter the column no:");
   scanf("%d",&column_no);
   while(column_no!=0)
   {
       k=column_no%26;
       if(k>26)
       {
           a[i]=(char)(k+38);
       }
       else
       {
           a[i]=(char)(k+64);
       }

       column_no=column_no/26;
       i++;
   }
   a[i]='\0';
   strrev(a);
   printf("\n given column title is %s",a);
   getch();
}
