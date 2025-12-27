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
//  Function Name : SearchFirstOcc
//  Description :   It is used to find the first occurence of a number in linked list
//  Input :         Address , Integer
//  Output :        Integer
//  Author :        Shreya Pramod Pasalkar
//  Date :          24/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int SearchFirstOcc(PNODE first , int no)
{
    int iOcc = 0;

    while(first != NULL)
    {
        if((first->data) != no)
        {
            iOcc++;
        }
        else
        {
            iOcc++;
            break;
        }
        first = first->next;
    }

    return iOcc;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to idisplay linked list
//  Input :         Pointer , Integer
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

    InsertFirst(&head , 101);
    InsertFirst(&head , 21);
    InsertFirst(&head , 21);
    InsertFirst(&head , 51);
    InsertFirst(&head , 21);
    InsertFirst(&head , 11);

    Display(head);

    iRet = Count(head);

    printf("Number of nodes : %d\n",iRet);

    iRet = SearchFirstOcc(head , 21);

    if(iRet != 0)
    {
        printf("First Occurence : %d\n", iRet);
    }
    else
    {
        printf("Node not present");
    }

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Output : 
// 
//  | 11 | -> | 21 | -> | 51 | -> | 21 | -> | 21 | -> | 101 | -> NULL
//  Number of Nodes : 6
//  Last Addition of nodes : 2
//
/////////////////////////////////////////////////////////////////////////////////////////////////