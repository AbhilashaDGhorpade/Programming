//accept number from user and toggle 4th bit of that number
#include<stdio.h>

typedef unsigned int UINT;
int main()
{
    UINT iMask=0;
    UINT iNo = 0;

    printf("Enter the number: \n");
    scanf("%d",&iNo);

    iMask = 0x00000008;

    iNo = iNo ^ iMask;
    
    printf("Updated number: %d\n",iNo);
    return 0;
}