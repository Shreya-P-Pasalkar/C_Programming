/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                     // For Input Output
#include<stdlib.h>                                    // For Memory Allocation

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Range
//  Description :   It is used to display the elements in user defined range in an array
//  Input :         Integer
//  Output :        Void
//  Author :        Shreya Pramod Pasalkar
//  Date :          14/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

void Range(int Arr[], int iLength , int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0,iValue1 = 0, iValue2 = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter Number of elements:");
    scanf("%d",&iSize);
    printf("Enter Starting value:");
    scanf("%d",&iValue1);
    printf("Enter Ending value:");
    scanf("%d",&iValue2);

    p = (int *)malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d:",iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Testcases : 
// 
// Input : 5  Input : 5   Input : 10  Input : 2    5   42    6    9             Output :5    6    9
// Input : 3  Input : 10  Input : 15  Input : 10    15    11                    Output : 11
// Input : 6  Input : 3   Input : 10  Input : 11     3    11    4    9    8     Output : 4    8    9
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////