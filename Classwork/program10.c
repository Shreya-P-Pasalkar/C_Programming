/*
Step 1: Understand the problem statement
Step 2: Write the Algorithm
Step 3: Decide the programming Language
Step 4: Write the Program
Step 5: Test the Program
*/

/*
    Algorithm

    START
        Accept first number as no1
        Accept second number as no2
        If the input is negative then convert it into positive
        Perform Addition of no1 & no2
        Display the Addition on screen
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Required Header File
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: AdditionTwoNumber
//  Description:   It is used perform addition
//  Input:         Float, Float
//  Output:        Float
//  Author:        Shreya Pramod Pasalkar
//  Date:          09/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;

    //updator
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;  //Business Logic

    return fSum;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){
    int fValue1= 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter first no. : \n");
    scanf("%f",&fValue1);

    printf("Enter second no. : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1, fValue2);
    
    printf("Addition is : %f\n",fRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handled by the application
//
//  Input1 : 10.4    Input2 : 3.2     Output : 13.6 
//  Input1 : -10.4   Input2 : 3.2     Output : 13.6 
//  Input1 : 10.4    Input2 : -3.2    Output : 13.6 
//  Input1 : -10.4   Input2 : -3.2    Output : 13.6 
//  Input1 : 10.4    Input2 : 0.0     Output : 10.4 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
