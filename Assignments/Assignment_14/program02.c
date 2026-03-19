/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                    // For Input Output
#include<stdbool.h>                                  // For Boolean Datatype

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkZero
//  Description :   It is used to check if zero is present or not
//  Input :         Integer
//  Output :        Boolean
//  Author :        Shreya Pramod Pasalkar
//  Date :          1/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////


bool ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Original Value of iDigit is : %d", iNo);

    while(iNo != 0)
    {
       iDigit = iDigit % 10;
       
       if(iDigit == 2)
       {
            return true;
       }
       iNo = iNo / 10;
        
    }
    return false;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("It Contains no Zero");
    }

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Testcases : 
// 
// Input : 2395       Output : It contains no Zero
// Input : 1018       Output : It contains Zero
// Input : 9000       Output : It contains Zero
//
/////////////////////////////////////////////////////////////////////////////////////////////////