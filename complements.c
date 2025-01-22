#include<stdio.h>
int main()
{
    unsigned int number,ones_compl,twos_compl;
    printf("Enter number = ");
    scanf("%u",&number);
    if(number > 65535)
    {
        printf("Invalid number");
        return 1;
    }
    ones_compl=~number&0xFFFF;
    twos_compl=(~number+1)&0xFFFF;
    printf("Original number = %u",number);
    printf("\n1's complement = %u",ones_compl);
    printf("\n2's complement = %u",twos_compl);
    return 0;
}
