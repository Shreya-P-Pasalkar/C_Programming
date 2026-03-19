#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;
    char ch;

    for(iCnt = 0; iCnt <= 127; iCnt++)
    {
        printf("Character %d : %c\n", iCnt ,ch);
        ch++;
    }
}

int main()
{
    DisplayASCII();

    return 0;
}