#include <stdio.h>
#include <string.h>
char string_add_binary(char x[],char y[])
{
      int a[2];
      int b[2];
      int i = a[] - 1;                            //0=48,1=49
      int j = b[] - 1;                           //if a[i]=0(48-48)  if a[i]=1 (49-48)
      int carry = 0;
         while(i >= 0 || j >= 0){
         int A = i >= 0 ? a[i] - '0' : 0;
         int B = j >= 0 ? b[j] - '0' : 0;
         int sum = A + B + carry;
         carry = sum / 2;
         sum %= 2;
         i--;
         j--;
         printf("%d", sum);
       return sum;

}
int main()
{
    char num1[]="";
    char num2[]="";
    printf("enter 1st binary number");
    scanf("%s",&num1);
    printf("enter 2nd binary number");
    scanf("%s",&num2);
    string_add_binary(num1,num2);
    return 0;
}
