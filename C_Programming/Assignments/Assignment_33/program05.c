#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char ch )
{

    if(ch == 'A')
    {
        printf("Your Exam time is 7.00 AM");
    }
    else if(ch == 'B')
    {
        printf("Your Exam time is 8.30 AM");
    }
    else if(ch == 'C')
    {
        printf("Your exam time is 9.20 AM");
    }
    else if(ch == 'D')
    {
        printf("Your exam time is 10.30 AM");
    }
    else
    {
        printf("Wrong Division entered");
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter the Division : \n");
    scanf("%c" , &cValue);

    DisplaySchedule(cValue);

    return 0;
}