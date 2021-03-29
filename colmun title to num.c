#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("enter colmun number");
    scanf("%d",&n);
    char r="";
    if(n>0)
    {
        r=(char)+8(65+(n-1)%26);
        n=(n-1)/26;
    }
     else if(n<703){
    if(r%26!=0)
    printf("your column is %c%c",(n/26)+64,(n%26)+64);
    else
    printf("your column is %c%c",(n/26)+64-1,26);
  }
  else if(n<18279){
    if(r%26!=0)
    printf("your column is %c%c%c",(n/676)+64,((n%676)/26)+64,((n%676)%26)+64);
    else if((r-26)%676==0)
    printf("your column is %c%c%c",(n/676)+64-1,((n%676)/26)+64+25,26+64);
    else
    printf("your column is %c%c%c",(n/676)+64,((n%676)/26)+64-1,26+64);
  }

    printf("%s",&r);
}


/* int titleToNumber(string s) {
        int result = 0;
        for(char c : s){
            int d = c - 'A' + 1;
            result = result*26 + d;
                    }
        return result;

    char c;
    char str[10]="";
    int n,i;
    printf("enter column number=");
    scanf("%d",&n);
    int result = 0;
    int d = c - 'A' + 1;
    result = result*26 + d;

    return result;
        */
