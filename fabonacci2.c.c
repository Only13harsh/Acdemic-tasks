#include<stdio.h>
int fabo(int n)
{
    if(n<=1)
    {
        return n;
    }
    else{
        return fabo(n-1)+fabo(n-2);
    }
}

    void printfabo(int n)
    {
        for(int i=0;i<n;i++)
        {
        printf("%d\n",fabo(i));
        }
    }


    int main()
    {
        int n;
        printf("enter the no till which you want the fabonacci series :");
        scanf("%d",&n);

        printfabo(n);

return 0;
    }
