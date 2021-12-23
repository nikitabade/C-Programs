 //Singly Circular LL
   
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
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
    
    if((*head==NULL) && (*tail==NULL))    //LL is empty
    {
        *head= newn;
        *tail=newn;
    }
    else
    {
        newn->next= *head;
        *head= newn;
    }
    
    (*tail)->next=*head;         //to maintain circular Nature
}

void InsertLast(PPNODE head, PPNODE tail, int no)
{
    PNODE newn= NULL;
    newn= (PNODE)malloc(sizeof(NODE));
    
    newn-> data= no;
    newn-> next=NULL;
    
    if((*head==NULL) && (*tail==NULL))    //LL is empty
    {
        *head= newn;
        *tail=newn;
    }
    else
    {
        (*tail)->next=newn;
        *tail=newn;
        
    }
    
    (*tail)->next=*head;         //to maintain circular Nature
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
        
        for(i=1; i<ipos-1; i++)
        {
            temp= temp-> next;
        }
        newn->next=temp->next;
        temp-> next=newn;
        
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
        while(temp->next!=*tail)
        {
            temp= temp->next;
        }
        
        free(*tail);
        *tail= temp;
        (*tail)-> next=*head;
    }
    
}

void DeleteAtPos(PPNODE head, PPNODE tail, int ipos)
{
    PNODE temp=*head;
    PNODE targeted=NULL;
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
        targeted=temp->next;
        
        temp->next=targeted->next;
        
        free(targeted);
        
    }
}

int main()
{
    PNODE first=NULL;
    PNODE last=NULL;
    int iRet=0;
    
    InsertFirst(&first, &last,51);
    InsertFirst(&first, &last,21);
    InsertFirst(&first, &last,11);
    
    InsertLast(&first, &last,101);
    
    Display(first, last);
    
    iRet= Count(first, last);
    printf("Number of members of LL: %d\n", iRet);
    
    DeleteFirst(&first, &last);
    
    DeleteLast(&first, &last);
    
    Display(first, last);
    
    iRet= Count(first, last);
    printf("Number of members of LL: %d\n", iRet);
    
    InsertAtPos(&first, &last, 121, 2);
    
    Display(first, last);
    
    iRet= Count(first, last);
    printf("Number of members of LL: %d\n", iRet);
    
    DeleteAtPos(&first, &last, 2);
    
     Display(first, last);
    
    iRet= Count(first, last);
    printf("Number of members of LL: %d\n", iRet);
    
    return 0;
}
 