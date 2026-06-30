//accept number from user  and toggle 4th bit of that number 
#include<stdio.h>

typedef unsigned int UINT;
int main()
{
    UINT iMask=0xFFFFFFF7;
    UINT iNo =0;
    UINT iPos = 0;

    printf("Enter the number: \n");
    scanf("%d",&iNo);

    iNo = iNo & iMask;
    
    printf("Updated number: %d\n",iNo);
    return 0;
}
