#include <stdio.h>
int main()
{ 
  int n;
  printf("enter column no.=");
  scanf("%d",&n);
  if(n<27){
    printf("your column is %c",n+64);
  }
  else if(n<703){
    if(n%26!=0)
    printf("your column is %c%c",(n/26)+64,(n%26)+64);
    else
    printf("your column is %c%c",(n/26)+64-1,26);
  }
  else if(n<18279){
    if(n%26!=0)
    printf("your column is %c%c%c",(n/676)+64,((n%676)/26)+64,((n%676)%26)+64);
    else if((n-26)%676==0)
    printf("your column is %c%c%c",(n/676)+64-1,((n%676)/26)+64+25,26+64);
    else
    printf("your column is %c%c%c",(n/676)+64,((n%676)/26)+64-1,26+64);
  }
}