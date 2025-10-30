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

float AdditionTwoNumbers(
                            float fNo1,                      //First Input
                            float fNo2                       //Second Input
                        )
{
    float fSum = 0.0f;                                       //To store the result

    if(fNo1 < 0.0f)                                          //updator
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)                                          //updator
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;                                     //Business Logic

    return fSum;
}   // End of AdditionTwoNumbers

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1= 0.0f, fValue2 = 0.0f,                   //To accept user input
    fRet = 0.0f;                                           //To store the result

    printf("Enter first no. : \n");
    scanf("%f",&fValue1);

    printf("Enter second no. : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1, fValue2);           //Method call
    
    printf("Addition is : %f\n",fRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handlet by the application
//
//  Input1 : 10.4    Input2 : 3.2     Output : 13.6 
//  Input1 : -10.4   Input2 : 3.2     Output : 13.6 
//  Input1 : 10.4    Input2 : -3.2    Output : 13.6 
//  Input1 : -10.4   Input2 : -3.2    Output : 13.6 
//  Input1 : 10.4    Input2 : 0.0     Output : 10.4 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
