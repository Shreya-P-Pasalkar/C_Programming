/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>               // For Input-Output
#include<stdlib.h>              // For Memory Allocation
#include<stdbool.h>             // For Boolean datatype

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
//  Function Name : Prime
//  Description :   It is used to check if the number is prime
//  Input :         Integer
//  Output :        Integer
//  Author :        Shreya Pramod Pasalkar
//  Date :          24/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int Prime(int no)
{
    int iCnt = 0 , iSum = 0;

    for(iCnt = 1; iCnt <= no/2; iCnt++)
    {
        if(no % iCnt == 0)
        {
            iSum++;
        }
    }

    return iSum;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayPrime
//  Description :   It is used to display prime numbers from the linked list
//  Input :         Integer
//  Output :        Integer
//  Author :        Shreya Pramod Pasalkar
//  Date :          24/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayPrime(PNODE first)
{
    int iRet = 0;

    printf("Prime numbers from the linked list : ");

    while(first != NULL)
    {
        iRet = Prime(first->data);
        if(iRet == 1)
        {
            printf("%d\t",first->data);
        }
        first = first->next;
    }

    printf("\n");
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
//  Input :         Pointer , Integer
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
    InsertFirst(&head , 101);
    InsertFirst(&head , 28);
    InsertFirst(&head , 21);
    InsertFirst(&head , 11);

    Display(head);

    iRet = Count(head);
    printf("Number of Nodes : %d\n",iRet);

    DisplayPrime(head);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Output : 
// 
//  | 11 | -> |21| -> | 28 | -> | 101 | -> | 121 | -> NULL
//  Number of Nodes : 5
//  Prime numbers from the linked list : 11 21 101 
//
/////////////////////////////////////////////////////////////////////////////////////////////////