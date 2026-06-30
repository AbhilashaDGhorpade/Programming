//accept number from user and toggle 11th bit of that number
#include<stdio.h>

typedef unsigned int UINT;
int main()
{
    UINT iMask=0;
    UINT iNo = 0;

    printf("Enter the number: \n");
    scanf("%d",&iNo);

    iMask = 0x400;

    iNo = iNo ^ iMask;
    
    printf("Updated number: %d\n",iNo);
    return 0;
}
//8421 8421 8421 8421 8421
//0000 0000 0100 0000 0000
//  0    0   4    0     0