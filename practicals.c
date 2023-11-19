#include<stdio.h>
int fabon(int n)
{
    if(n<=1)
    {
        return n;
    }
    else{
        return fabon(n-1)+fabon(n-2);
    }
}

int fabo(int n)
{
    printf("enter fabo series upto %d : ",n);
    for(int i=0;i<=n;i++)
    {
    printf("%d:",fabon(i));

    }
    printf("\n");
}
int main()
{
    int terms;
    printf("enter the terms till which you want the fabonacci series :");
    scanf("%d",&terms);

if(terms<=0)
{
    printf("enter a digit greater than 0 :");
}
else{
    fabo(terms);
}
return 0;
}