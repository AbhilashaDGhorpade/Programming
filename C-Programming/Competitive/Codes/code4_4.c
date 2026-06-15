/* Assignment no 4- 4.Write a program which accept number from user and return summation of all its
non factors.
Input : 12
Output : 50
Input : 10
Output : 37
*/

#include<stdio.h>
int SumNonFact(int iNo)
{
    int iSum=0;
    int iNoFact = 0;

    for(iNoFact=1; iNoFact<iNo; iNoFact++)
    {
        if(iNo%iNoFact!=0)
        {
            iSum=iSum+iNoFact;
        }
    }
    return iSum;
}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number: ");
scanf("%d",&iValue);
iRet = SumNonFact(iValue);
printf("%d\t",iRet);
return 0;
}