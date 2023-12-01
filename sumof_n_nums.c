#include<stdio.h>
int main()
{
int sum=0,n;
printf("enter the no till which you want  to find the sum :");
scanf("%d",&n);
for(int i=0;i<=n;i++)
{
sum=sum+i;
}
printf("the sum till the entered number ie %d is : %d ",n,sum);
return 0;
}
