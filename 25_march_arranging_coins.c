#include <stdio.h>

int main()
{
  int n,i;
  printf("enter coins=");
  scanf("%d",&n);
  for(i=1;i<n;i++){
    if(((i*(i+1))/2) > n)
    break;
  }
  i-=1;
  if(n-(i*(i+1))/2 != 0)
  printf("%d rows are completed and row no. %d is remain incomplete with %d coin",i,i+1,n-(i*(i+1))/2);
  else
  printf("%d rows are completed and no coin remain left",i);
}

#include <stdio.h>

int main()
{
  int n,i;
  printf("enter coins=");
  scanf("%d",&n);
  i=(pow((1+8*n),0.5)-1)/2;
  if(n-(i*(i+1))/2 != 0)
  printf("%d rows are completed and row no. %d is remain incomplete with %d coin",i,i+1,n-(i*(i+1))/2);
  else
  printf("%d rows are completed and no coin remain left",i);
}
