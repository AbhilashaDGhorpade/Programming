//Accept number and check whether 3rd bit is ON or OFF
#include<stdio.h>

int main()
{
    int iNo = 0;
    int iMask = 4;
    int iAns = 0;

    printf("Enter Number: \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;     //Bitwise AND

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