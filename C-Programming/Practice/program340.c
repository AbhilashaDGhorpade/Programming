//accept number from user and position and off that bit at that position
#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo,UINT iPos)
{
    UINT iMask = 0x1;
    UINT iResult = 0;
    
    if(iPos < 1 || iPos > 32)
    {
        printf("invalid bit position\n");
        return iNo;
    }

    iMask=iMask<<(iPos-1);

    iMask= ~iMask;

    iResult = iNo & iMask;
    return iResult;
}
int main()
{
    UINT iValue = 0,iRet =0,iLocation = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    printf("Enter the bit position: ");
    scanf("%d",&iLocation);

    iRet = OffBit(iValue,iLocation);
    printf("updated number is: %d\n",iRet);


    return 0;
}
/*
1111 1111 1111 1111 1111 1111 1111 0111
  F   F    F    F    F    F    F     7

*/
