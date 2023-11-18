#include<stdio.h>
int main()
{
    int arr[100];
    int n ; //length of array
    printf("enter the size of the array : ");
    scanf("%d",&n);
    for(int i = 0; i<n;i++)
    {
        printf("enter the arr[at index %d] == \n ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n;i++)
    {
printf(" \n arr[%d] == %d ",i+1 , arr[i]);
    }
    return 0;
}