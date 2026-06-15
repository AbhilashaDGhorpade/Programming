/*
Assignment 7- 2. Accept amount in US dollar and return its corresponding value in Indian currency.
Consider 1$ as 70 rupees.
Input : 10
Output : 700
Input : 3
Output : 270
Input : 1200
Output : 84000
*/
#include<stdio.h>
int DollarToINR(int iNo)
{
    float iDoll = 1;
    iDoll = iNo*95.11;          //considering 1 Doller = 95.11 rupees
    return iDoll;
}
int main()
{
int iValue = 0, iRet = 0;
printf("Enter number of USD: ");
scanf("%d",&iValue);
iRet = DollarToINR(iValue);
printf("Value in INR is: %d",iRet);
return 0;
}