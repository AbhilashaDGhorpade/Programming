//Accept number and check whether 3rd bit is ON or OFF
#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 4;             //unsigned - uses all 32 bits
    unsigned int iAns = 0;

    printf("Enter Number: \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;     

    if(iAns == iMask)
    {
        printf("Third bit is ON\n");
    }
    else
    {
        printf("Third bit is OFF\n");
    }

     return 0;
} 