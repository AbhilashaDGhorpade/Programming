//Accept number and check whether 7th bit is ON or OFF
#include<stdio.h>

typedef unsigned int UINT;             
int main()
{
    UINT iNo = 0;
    UINT iMask = 64;             
    UINT iAns = 0;

    printf("Enter Number: \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;     

    if(iAns == iMask)
    {
        printf("seventh bit is ON\n");
    }
    else
    {
        printf("seventh bit is OFF\n");
    }

     return 0;
} 