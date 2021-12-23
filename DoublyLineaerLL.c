#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * next;
    struct node * prev;
}NODE, * PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn=NULL;
    
    newn= (PNODE)malloc(sizeof(NODE));
    
    newn-> data=no;
    newn-> next= NULL;
    newn-> prev=NULL;
    
    if(*Head== NULL)
    {
        *Head= newn;
    }
    else
    {
        newn->next= *Head;
        (*Head)->prev= newn;
        
        *Head= newn;
    }
}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn=NULL;
    PNODE temp=*Head;
    
    newn= (PNODE)malloc(sizeof(NODE));
    
    newn-> data=no;
    newn-> next= NULL;
    newn-> prev=NULL;
    
    if(*Head== NULL)
    {
        *Head= newn;
    }
    else
    {
        while(temp-> next!=NULL)
        {
            temp= temp-> next;
        }
        
        temp->next=newn;
        newn->prev=temp;
    }
}

void Display(PNODE Head)
{
    while(Head!= NULL)
    {
        printf("|%d|->", Head-> data);
        Head= Head-> next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt=0;
    
    while(Head!= NULL)
    {
        iCnt++;
        Head= Head-> next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp= *Head;
    
    if(*Head!=NULL)   //LL contains atleast one node
    {
        *Head= (*Head)-> next;
        free(temp);
        if(*Head!=NULL)
        {
            (*Head)-> prev=NULL;
        }
    }
}


void DeleteFirstX(PPNODE Head)    //without using temp
{
    
    if(*Head==NULL)
    {
        return;
    }
    else if((*Head)-> next=NULL)
    {
        free(*Head);
        *Head=NULL;
    }
    else
    {
        *Head= (*Head)-> next;
        free((*Head)->prev);
        (*Head)-> prev=NULL;
    }
}


void DeleteLast(PPNODE Head)
{
    PNODE temp= *Head;
    
    if(*Head==NULL)
    {
        return;
    }
    else if((*Head)-> next=NULL)
    {
        free(*Head);
        *Head=NULL;
    }
    else
    {
        while(temp-> next!=NULL)
        {
            temp= temp-> next;
        }
        
        temp->prev->next=NULL;
        free(temp);
    }
    
}

void InsertAtPos(PPNODE Head, int no, int pos)
{
    PNODE newn=NULL;
    PNODE temp=*Head;
    int iSize=0, i=0;
    
    iSize= Count(*Head);
    
    if((pos<1) || (pos>iSize+1))
    {
        printf("Invalid position");
        return;
    }
    
    if(pos==1)
    {
        InsertFirst(Head, no);
    }
    else if(pos==iSize+1)
    {
        InsertLast(Head,no);
    }
    else
    {
        newn= (PNODE)malloc(sizeof(NODE));
        
        newn->data= no;
        newn-> next= NULL;
        newn-> prev= NULL;
        
        for(i=1; i< pos-1; i++)
        {
            temp= temp-> next;
        }
        newn-> next=temp-> next;
        newn-> next-> prev=newn;
        temp->next= newn;
        newn-> prev=temp;
    }
    
}

void DeleteAtPos(PPNODE Head,int pos)
{
   
    PNODE temp=*Head;
    int iSize=0, i=0;
    
    iSize= Count(*Head);
    
    if((pos<1) || (pos>iSize+1))
    {
        printf("Invalid position");
        return;
    }
    
    if(pos==1)
    {
        DeleteFirst(Head);
    }
    else if(pos==iSize)
    {
        DeleteLast(Head);
    }
    else
    {
       
        for(i=1; i< pos-1; i++)
        {
            temp= temp-> next;
        }
        
        temp->next= temp-> next->next;
        free(temp->next->prev);
        temp-> next-> prev= temp;
        
    }
    
}

int main()
{
    PNODE first= NULL;
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
            InsertFirst(&first,value);
            break;
            
            case 2:
            printf("Enter the data to insert\n");
            scanf("%d",&value);
            InsertLast(&first,value);
            break;
            
            case 3:
            printf("Enter the data to insert\n");
            scanf("%d",&value);
            printf("Enter the position\n");
            scanf("%d",&pos);
            InsertAtPos(&first,value,pos);
            break;
            
            case 4:
            DeleteFirst(&first);
            break;
            
            case 5:
            DeleteLast(&first);
            break;
            
            case 6:
            
            printf("Enter the position");
            scanf("%d", &pos);
            DeleteAtPos(&first,pos);
            break;
            
            case 7:
            printf("elements of Linkeslist are\n");
            Display(first);
            break;
            
            case 8:
            iRet= Count(first);
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