#include <stdio.h>
#include <string.h>

void main(){
  char str[20];
  int n,m;
  printf("enter string=");
  gets(str);
  n=strlen(str);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(str[i]==str[j])
        m++;
    }
    if(m<2){
      printf("%c at %d place",str[i],i+1);
      break;
    }
    m=0;
  }
  if(m==0)
  printf("no such unique character");
}