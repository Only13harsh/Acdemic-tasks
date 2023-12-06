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
        printf("there are no nodes to print, so exiting\n");
    }
    else
    {
        while (ptr != NULL) 
        {
            printf("data at node %d is: %d \n", x + 1, ptr->data);
            ptr = ptr->next;
            x++;  
        }
    }
}

struct node* deletenode(struct node *head, int nodeno)
{
    struct node *ptr = head;
    struct node *ptr2 = head;
    int n = 0;

    while (n < nodeno)
    {
        if (ptr == NULL)
            return head; // Avoid going beyond the end of the list

        ptr2 = ptr;
        ptr = ptr->next;
        n++;
    }

    if (ptr == head)
    {
        head = head->next;
    }
    else
    {
        ptr2->next = ptr->next;
    }

    free(ptr); 
    return head;
}

int main()
{
    int n;
    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *newnode = NULL;
    printf("enter the number of nodes you want to create: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->next = NULL;
        printf("enter data in node %d: ", i + 1);
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
     int deleteatindex;
  
    printf("\nEnter the index of the node to delete it :");
  scanf("%d",&deleteatindex);  
  
    head = deletenode(head, 3);
    printf("after deleting ");
    traversal(head);

    return 0;
}
