/* Assignment 5-5. Write a program which accept N and print first 5 multiples of N.
Input : 4
Output : 4 8 12 16 20
*/

#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int iCount=0;

    for(iCount=1; iCount<=5; iCount++)
    {
        
        printf("%d\t",iNo*iCount);
       
}
}
int main()
{
int iValue = 0;
printf("Enter number: ");
scanf("%d",&iValue);
MultipleDisplay(iValue);
return 0;
}