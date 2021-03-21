/*
 */

#include<stdio.h>

#include<conio.h>

void main()

{

int i,target_val,b = 0;

printf("count of numbers=");

scanf("%d",&i);

//a=malloc(i*sizeof(int));
int a[i];

for(int j=0;j<i;j++)

{

printf("enter %d number=",j+1);

scanf("%d",&a[j]);

}

printf("enter target=");

scanf("%d",&target_val);

for(int j=0; j<i;j++)

{

for(int k=j+1;k<i;k++)

{

if((a[j]+a[k])==target_val)

{

b++;

printf("(%d,%d)\n",a[j],a[k]);

}

}

}
if(b!=0)
printf("there are total %d pairs",b);
else printf("there are total %d pairs",b);
}