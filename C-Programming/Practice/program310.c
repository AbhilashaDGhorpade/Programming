//Accept number and check whether 3rd bit is ON or OFF
#include<stdio.h>

typedef unsigned int UINT;              //replaced unsigned int with UINT
int main()
{
    UINT iNo = 0;
    UINT iMask = 4;             
    UINT iAns = 0;

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