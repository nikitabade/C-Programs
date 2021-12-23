#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * next;
}NODE, *PNODE, **PPNODE;


void Display(PNODE Head)
{
    while(Head!=NULL)
    {
        printf("|%d|->", Head-> data);
        Head= Head->next;
    }
    printf("NULL\n");
}


int Count(PNODE Head)
{
    int iCnt=0;
    
    while(Head!= NULL)
    {
        iCnt++;
        Head= Head->next;
    }
    return iCnt;
}


void InsertFirst(PPNODE Head, int no)
{
    PNODE newn= NULL;
    
    newn= (PNODE)malloc(sizeof(NODE));
    
    newn-> data=no;
    newn-> next=NULL;
    
    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn-> next= *Head;
        *Head= newn;
    }
}


void InsertLast(PPNODE Head, int no)
{
    PNODE newn= NULL;
    PNODE temp= *Head;
    
    newn= (PNODE)malloc(sizeof(NODE));
    
    newn-> data=no;
    newn-> next=NULL;
    
    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        while(temp-> next!= NULL)
        {
            temp= temp-> next;
        }
        
        temp-> next= newn;
    }
}



void DeleteFirst(PPNODE Head)
{
    PNODE temp= *Head;
    if(*Head!=NULL)
    {
       *Head= (*Head)->next;
       free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp= *Head;
    
    if(*Head==NULL)
    {
        return;
    }
    else if((*Head)-> next== NULL)
    {
        free(*Head);
        *Head= NULL;
    }
    else
    {
        while(temp-> next-> next!=NULL)
        {
            temp= temp->next;
        }
        
        free(temp-> next);
        temp-> next=NULL;
    }
}


void InsertAtPos(PPNODE Head, int no, int pos)
{
    PNODE newn= NULL;
    PNODE temp= *Head;
    int size=0, i=0;
    
    size= Count(*Head);
    
    if((pos < 1) || (pos > size+1))    //filter for invalid POSITION
    {
        printf("Invalid POSITION");
        return;
    }
    
    if(pos==1)         //first position
    {
        InsertFirst(Head, no);
    }
    else if(pos==size+1)      //last position
    {
        InsertLast(Head, no);
    }
    else                //inbetween position
    {
        newn= (PNODE)malloc(sizeof(NODE));
        
        newn-> data= no;
        newn-> next= NULL;
        
        for(i=1; i< pos-1; i++)
        {
            temp= temp-> next;
        }
        newn->next= temp->next;
        temp->next= newn;
    }
    
}

void DeleteAtPos(PPNODE Head, int pos)
{
    PNODE temp= *Head;
    PNODE targeted=NULL;
    int size=0, i=0;
    
    size= Count(*Head);
    
    if((pos < 1) || (pos > size))    //filter for invalid POSITION
    {
        printf("Invalid POSITION");
        return;
    }
    
    if(pos==1)         //first position
    {
        DeleteFirst(Head);
    }
    else if(pos==size)      //last position
    {
        DeleteLast(Head);
    }
    else                //inbetween position
    {
    
        for(i=1; i< pos-1; i++)
        {
            temp= temp-> next;
        }
        
        targeted= temp->next;
        
        temp-> next= targeted-> next;
        
        free(targeted);
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