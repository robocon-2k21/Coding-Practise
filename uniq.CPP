#include<stdio.h>
#include<conio.h>
#include<string.h>
int count=0;
int firstUniqChar(char *  s){
   for(int i=0;i<strlen(s);i++){
    for(int j=0;j<strlen(s);j++){
     if(s[i]==s[j])  count++;
    }
    if(count==1){
   return s[i];
    }
    count=0;
   }
   if(count==0){
   return -1;
   }
}
void main()
{
   clrscr();
   char s[10];
   printf("enter str=");
   scanf("%s",&s);
   char res = firstUniqChar(s);
   printf("%c ",res);
   getch();
}