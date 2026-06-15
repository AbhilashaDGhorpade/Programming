/* Assignment no 4- 5.Write a program which accept number from user and return difference between summation of all its factors and non factors.
Input : 12
Output : -34 (16 - 50)
Input : 10
Output : -29 (8 - 37)
*/

#include<stdio.h>
int FactDiff(int iNo)
{
int iNofact =0;
int iFact = 0;
int iCount = 0;

for(iCount=1; iCount<iNo;iCount++)
{
    if(iNo%iCount==0)
    {
        iFact=iFact+iCount;
    }
    else
    {
        iNofact=iNofact+iCount;
    }
}
  return (iFact-iNofact);
   

}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = FactDiff(iValue);
printf("%d",iRet);
return 0;
}