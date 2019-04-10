#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int data;
    struct NODE *next;
    
}NODE;

NODE *createlist(int n);
void display(NODE *head);
NODE *insert(int pos,int item, NODE* head);

NODE *head;

int main()
{
    int n;
    int pos;
    int item;
    head = NULL;
    printf("Enter Number of Nodes: ");
    scanf("%d",&n);
    head = createlist(n);
    printf("\n");
    display(head);
    printf("Enter Position = ");
    scanf("%d",&pos);
    printf("Enter Data = ");
    scanf("%d",&item);
    head = insert(pos, item, head);
    printf("After insert: ");
    display(head);
    
    
    
}

NODE *createlist(int n)
{
    head = NULL;
    NODE *temp = NULL;
    NODE *k = NULL;
    int i;
    for(i = 0; i < n; i++ )
    {
        temp = (NODE*)malloc(sizeof(NODE));
        printf("Node Number %d: ", i+1);
        scanf("%d",&temp->data);
        temp->next = NULL;
        
        if(head == NULL)
        {
            head = temp;
        }
        else
        {
            k = head;
            while(k->next != NULL)
            {
                k = k->next;
            }
            k->next = temp;
        }
        
        
    }
    return head;
    
}

void display(NODE *head)
{
    printf("Linked List: ");
    while(head != NULL)
    {
        printf(" %d-> ", head->data);
        head = head->next;
        
    }
    printf("NULL");
    printf("\n");
    
}
NODE *insert(int pos,int item , NODE* head)
{   NODE*j = head;
    int i = 1;
    NODE *temp = NULL;
    temp = (NODE*)malloc(sizeof(NODE));
    temp->data = item;
    temp->next = NULL;
    
    if(pos == 1)
    {
        temp->next = head;
        head = temp; 
    }
    else
    {
    while(j!= NULL)
    {   i = i + 1; 
        if(i == pos)
        {
            temp->next =  j->next;
            
            j->next = temp;
            
        }
        
        j = j->next;
        
        
        
    }
    }
    
    return head;


}
