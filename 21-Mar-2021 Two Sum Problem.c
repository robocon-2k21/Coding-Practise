#include<stdio.h>
int sum(int nums[],int target)
{
for(int i=0;i<4;i++)
{
for(int j=i+1;j<4;j++)
{
if(target== nums[i]+nums[j])
{
printf("true");
}
else
{
printf("false");
}
}
}
return 0;
}

int main()
{
int nums[4];
int target;
for(int a=0;a<=3;a++)
{
scanf("%d \n",&nums[a]);
}
scanf("%d \n",&target);
sum(nums[4],target);
return 0;
}

