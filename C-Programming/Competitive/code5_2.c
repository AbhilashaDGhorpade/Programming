/* Assignment 5-2.Write a program which accept number from user and print numbers till that
number.
Input : 8
Output : 1 2 3 4 5 6 7 8
*/

#include<stdio.h>
void Display(int iNo)
{
    int iCount = 0;
    for(iCount=1; iCount<=iNo; iCount++)
    {
        printf("%d\t",iCount);
    }
}
int main()
{
int iValue = 0;
printf("Enter number: ");
scanf("%d",&iValue);
Display(iValue);
return 0;
}