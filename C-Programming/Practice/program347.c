// accept no. from user and toggle bit at 3 and 8 position
#include<stdio.h>

typedef unsigned int UINT;


int main()
{
    UINT iMask = 0x00000084;
    UINT iNo=0;
    UINT iResult = 0;

    printf("Enter number: \n");
    scanf("%d",&iNo);

    iResult= iNo ^ iMask;

    printf("Updated number: %d\n",iResult);


    return 0;
}
/*
8421 8421
1000 0100
  8    4
*/

