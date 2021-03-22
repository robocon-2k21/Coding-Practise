#include <stdio.h>
#include <string.h>
//Compiler version gcc  6.3.0

int main()
{
  char a[16],b[16],sum[16];
  int i,j,d;
  char c='0';
  printf("enter 1st number=");
  gets(a);
  printf("enter 2nd number=");
  gets(b);
  i=strlen(a)-1;
  j=strlen(b)-1;
  if(i>j){
    while(i>=0){
      if(j>=0){
        sum[i+1]=a[i]^b[j]^c;
        c=((a[i]^b[j])&c) | a[i]&b[j] ;
        i--;
        j--;

      }
      else{
        sum[i+1]= a[i]^c^'0';
        c=(a[i]&c);
        i--;
      }
    }
    sum[0]=c;
  }
  else if(i<j){
    while(j>=0){
      if(i>=0){
        sum[j+1]=a[i]^b[j]^c;
        c=((a[i]^b[j])&c) | a[i]&b[j] ;
        i--;
        j--;
      }
      else{
        sum[j+1]=b[j]^c^'0';
        c=(b[j]&c);
        j--;
      }
    }
    sum[0]=c;
  }
  else if(i==j){
    while(j>=0){
        sum[j+1]=a[j]^b[j]^c;
        c=((a[j]^b[j])&c) | a[j]&b[j] ;
        j--;
    }
    sum[0]=c;
  }
 printf("answer=");
 puts(sum);

}
