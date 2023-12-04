#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

void traversal(struct node* head)
{
    int x = 0;
    struct node* ptr = head;  
    if (head == NULL)
    {
        printf("there are no nodes to print, so exiting");
    }
    else
    {
        while (ptr != NULL) 
        {
            printf("data at node %d is : %d \n ", x + 1, ptr->data);
            ptr = ptr->next;
            x++;  
        }
    }
}

int main()
{
    int n;
    struct node * head=NULL;
    struct node * temp = NULL;
    struct node * newnode=NULL;
    printf("enter the no of nodes you want to create :");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
{
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->next = NULL;
    printf("enter data in node %d :", i + 1);
    scanf("%d", &newnode->data);

    if (head == NULL)
    {
        head = temp = newnode;  
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
}
    traversal(head);

    return 0;
}
