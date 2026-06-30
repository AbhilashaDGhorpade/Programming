//accept number from user and toggle  13th bit of that number 
#include<stdio.h>

typedef unsigned int UINT;
int main()
{
    UINT iMask=0xFFFFEFFF;
    UINT iNo =0;
    

    printf("Enter the number: \n");
    scanf("%d",&iNo);

    iNo = iNo & iMask;
    
    printf("Updated number: %d\n",iNo);
    return 0;
}
