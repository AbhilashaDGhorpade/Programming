//Accept number and position and check whether bit is ON or OFF at that position.
#include<stdio.h>

typedef unsigned int UINT;             
int main()
{
    UINT iNo = 0;
    UINT iMask = 1;                   
    UINT iAns = 0;
    UINT iPos = 0;

    printf("Enter Number: \n");
    scanf("%d",&iNo);

    printf("Enter the position : \n");
    scanf("%d",&iPos);

    iMask = iMask << (iPos - 1);

    iAns = iNo & iMask;     

    if(iAns == iMask)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }

     return 0;
} 