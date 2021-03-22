
#include<stdio.h>
int sum(int nums[],int target)
{
for(int i=0;i<4;i++)
{
for(int j=i+1;j<4;j++)
{
if(target== nums[i]+nums[j])
{
//printf("true");
return 1;
}
//else
//{
//printf("false");
//}
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
scanf("%d",&nums[a]);
//printf("%d", nums[a]);
}
scanf("%d",&target);
//printf("outside loop");

sum(nums,target);

return 0;
}
