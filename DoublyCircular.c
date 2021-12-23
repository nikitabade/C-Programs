 //Doubly Circular LL
   
//Doubly Circular

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
    struct node* prev;
}NODE, *PNODE, **PPNODE;

void Display(PNODE head, PNODE tail)
{
    if((head==NULL) && (tail==NULL))
    {
       return;
    }
    
    do
    {
        printf("|%d|->", head-> data);
        head= head->next;
        
    }while(head!=tail->next);
    
    printf("\n");
}

int Count(PNODE head, PNODE tail)
{
    int iCnt=0;
    
    if((head==NULL) && (tail==NULL))
    {
       return;
    }
    
    do
    {
        iCnt++;
        head= head->next;
        
    }while(head!=tail->next);
    
    return iCnt;
}

void InsertFirst(PPNODE head, PPNODE tail, int no)
{
    PNODE newn= NULL;
    newn= (PNODE)malloc(sizeof(NODE));
    
    newn-> data= no;
    newn-> next=NULL;
    newn->prev=NULL;
    
    if((*head==NULL) && (*tail==NULL))    //LL is empty
    {
        *head= newn;
        *tail=newn;
    }
    else
    {
        newn->next= *head;
        (*head)->prev= newn;
        *head=newn;
    }
    
    (*tail)->next=*head;         //to maintain circular Nature
    (*head)->prev=*tail;
}

void InsertLast(PPNODE head, PPNODE tail, int no)
{
    PNODE newn= NULL;
    newn= (PNODE)malloc(sizeof(NODE));
    
    newn-> data= no;
    newn-> next=NULL;
    newn->prev=NULL;
    
    if((*head==NULL) && (*tail==NULL))    //LL is empty
    {
        *head= newn;
        *tail=newn;
    }
    else
    {
        (*tail)->next=newn;
        newn->prev=*tail;
        *tail=newn;
        
    }
    
    (*tail)->next=*head;         //to maintain circular Nature
    (*head)->prev=*tail;
}

void InsertAtPos(PPNODE head, PPNODE tail, int no, int ipos)
{

    PNODE temp=*head;
    PNODE newn=NULL;
    int size=0, i=0;
    size=Count(*head, *tail);
    
    if((ipos<1) || (ipos>size+1))
    {
        printf("Invalid Position");
        return;
    }
    if(ipos==1)
    {
        InsertFirst(head, tail, no);
    }
    else if(ipos==size+1)
    {
        
        InsertLast(head, tail,no);
    }
    else
    {
        newn= (PNODE)malloc(sizeof(NODE));
        
        newn->data= no;
        newn-> next=NULL;
        newn->prev=NULL;
        
        for(i=1; i<ipos-1; i++)
        {
            temp= temp-> next;
        }
        newn->next=temp->next;
        newn->next->prev=newn;
        temp-> next=newn;
        newn->prev=temp;
        
    }
}

void DeleteFirst(PPNODE head, PPNODE tail)
{
    if((*head==NULL) && (*tail==NULL))
    {
        return;
    }
    else if(*head==*tail)
    {
        free(*head);
        *head=NULL;
        *tail=NULL;
    }
    else
    {
        *head= (*head)->next;
        free((*tail)->next);
        (*tail)->next=*head;
        (*head)->prev=*tail;
        
    }
}

void DeleteLast(PPNODE head, PPNODE tail)
{
    PNODE temp= *head;
    
    if((*head==NULL) && (*tail==NULL))
    {
        return;
    }
    else if(*head==*tail)
    {
        free(*head);
        *head=NULL;
        *tail=NULL;
    }
    else
    {
        *tail= (*tail)->prev;
        free((*tail)->next);
        
        (*tail)-> next=*head;
        (*head)->prev=*tail;
    }
    
}

void DeleteAtPos(PPNODE head, PPNODE tail, int ipos)
{
    PNODE temp=*head;
    
    int size=0, i=0;
    
    size=Count(*head, *tail);
    
    if((ipos<1) || (ipos>size))
    {
	printf("Invalid Position");
        return;
    }
    if(ipos==1)
    {
        DeleteFirst(head, tail);
    }
    else if(ipos==size)
    {
        
        DeleteLast(head, tail);
    }
    else
    {
        
        for(i=1; i<ipos-1; i++)
        {
            temp= temp-> next;
        }
        
        temp-> next= temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp;
        
    }
}

int main()
{
    PNODE first= NULL;
    PNODE Last= NULL;
    int iChoice=1, value=0, iRet=0, pos=0;
    
    while(iChoice !=0)
    {
        printf("\n______________________________________________________\n");
        printf("Enter the desired operation that you want to perform on linkedlist\n");
        printf("1: Insert the node at first position\n");
        printf("2: Insert the node at last position\n");
        printf("3: Insert the node at desired position\n");
        printf("4: Delete the first node\n");
        printf("5: Delete the Last node\n");
        printf("6: Delete the node at desired position\n");
        printf("7: Display the contents of Linkeslist\n");
        printf("8: Count the number from the LL\n");
        printf("0: Terminate the application\n");
        scanf("%d", &iChoice);
        printf("\n____________________________________________________\n");
    
        switch(iChoice)
        {
            case 1:
            printf("Enter the data to insert\n");
            scanf("%d",&value);
            InsertFirst(&first, &Last, value);
            break;
            
            case 2:
            printf("Enter the data to insert\n");
            scanf("%d",&value);
            InsertLast(&first,&Last, value);
            break;
            
            case 3:
            printf("Enter the data to insert\n");
            scanf("%d",&value);
            printf("Enter the position\n");
            scanf("%d",&pos);
            InsertAtPos(&first,&Last, value,pos);
            break;
            
            case 4:
            DeleteFirst(&first,&Last);
            break;
            
            case 5:
            DeleteLast(&first, &Last);
            break;
            
            case 6:
            
            printf("Enter the position");
            scanf("%d", &pos);
            DeleteAtPos(&first, &Last, pos);
            break;
            
            case 7:
            printf("elements of Linkeslist are\n");
            Display(first, Last);
            break;
            
            case 8:
            iRet= Count(first, Last);
            printf("Number of elements are:%d\n", iRet);
            break;
            
            case 0:
            printf("Thank you for using Linkeslist\n");
            break;
            
            default:
            printf("Wrong choice");
            break;
        
        }
    }
    return 0;
}