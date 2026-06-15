//Assignment 2 - 5. Accept number from user and check whether number is even or odd.

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkEven(int iNo)
{
    if(iNo%2==0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is Odd");

    }
 
    
}
int main()
{
 int iValue = 0;
 BOOL bRet = FALSE;
 printf("Enter number: ");
 scanf("%d" ,&iValue);
 bRet = ChkEven(iValue);
 // Display result
 return 0;
}