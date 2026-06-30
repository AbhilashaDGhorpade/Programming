//accept number from user and toggle 28th bit of that number
#include<stdio.h>

typedef unsigned int UINT;
int main()
{
    UINT iMask=0;
    UINT iNo = 0;

    printf("Enter the number: \n");
    scanf("%d",&iNo);

    iMask = 0x8000000;

    iNo = iNo ^ iMask;
    
    printf("Updated number: %d\n",iNo);
    return 0;
}
//8421 8421 8421 8421 8421 8421 8421 8421 8421
//0000 0000 1000 0000 0000 0000 0000 0000 0000
//  0    0   8    0     0   0    0    0    0