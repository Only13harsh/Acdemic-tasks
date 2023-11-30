#include<stdio.h>

int main()
{
    char name ;
    printf("enter the name");
    scanf(" %c",&name);
    if(name=='A')
    {
        printf("the name A is at 1st index");
        }
        else if (name == 'B')
        {
            printf("the name B is at 2nd index");
            }
            else if (name == 'C')
            {
                printf("the name C is at 3rd index");
                }
                else if (name == 'D')
                {
                    printf("the name D is at 4th index");
                    }
                    else if (name == 'E')
                    {
                        printf("the name E is at 5th index");
                        }
                        else
                        {
                            printf("the name is not in the specified set");
                        }
                        return 0;
}