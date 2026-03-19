/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>               // For Input-Output
#include<stdlib.h>              // For Memory Allocation

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Structure creation : Node
//
/////////////////////////////////////////////////////////////////////////////////////////////////

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : InsertFirst
//  Description :   It is used to insert node at first postion in linked list
//  Input :         Pointer , Integer
//  Output :        Void
//  Author :        Shreya Pramod Pasalkar
//  Date :          24/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionEven
//  Description :   It is used to do addition of even nodes
//  Input :         Address
//  Output :        Integer
//  Author :        Shreya Pramod Pasalkar
//  Date :          24/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int AdditionEven(PNODE first)
{
    int iSum = 0;

    while(first != NULL)
    {
        if((first->data % 2) == 0)
        {
            iSum = iSum + (first->data);
        }
        first = first->next;
    }

    return iSum;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to idisplay linked list
//  Input :         Address
//  Output :        Void
//  Author :        Shreya Pramod Pasalkar
//  Date :          24/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf(" NULL\n");
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Count
//  Description :   It is used to count number of nodes linked list
//  Input :         Address
//  Output :        Void
//  Author :        Shreya Pramod Pasalkar
//  Date :          24/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first->next;
    }

    return iCount;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{   
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head , 121);
    InsertFirst(&head , 100);
    InsertFirst(&head , 28);
    InsertFirst(&head , 21);
    InsertFirst(&head , 11);

    Display(head);

    iRet = Count(head);
    printf("Number of Nodes : %d\n",iRet);

    iRet = AdditionEven(head);

    printf("Addtion of even numbers : %d\n",iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Output : 
// 
//  | 11 | -> |21| -> | 28 | -> | 100 | -> | 121 | -> NULL
//  Number of Nodes : 5
//  Addition of even numbers : 128
//
/////////////////////////////////////////////////////////////////////////////////////////////////