#include<stdio.h>
 #include<conio.h>

int main ()

日{

    char str[100000],x;
    int cnt=0,i,j;
    printf ("s = ");
    scanf ("%s", &str);
    for (int i=0;str[i]!='\0';i++)
    {
       cnt=0; x=str[i]; j=i;i=i+1;
    while (str[i] !='10')
        {
            if(str[i] == x )
            { cnt++; i++; }
            else
            i++;
        }

    if (cnt==0)
    printf ("&d",j);
    else
    x= str[j];
    }

}
