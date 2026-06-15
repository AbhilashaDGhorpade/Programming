/*
START
    Accept number as No
    if No is Completely divisible by 2 
        then print Even 
    otherwise
        print odd
STOP


START
    Accept number as No
    divide No by 2
    if remainder is 0
        then print as even
    otherwise
        print as odd

STOP
*/

#include<stdio.h>

int main()
{
    int iValue =0;
    int iRemainder = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;

    if(iRemainder==0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is odd\n");
    }





    return 0;
}