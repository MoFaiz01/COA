#include<stdio.h>
int main()
{
    int bin,rem,base=1,dec=0;
    printf("Enter any binary number = ");
    scanf("%d",&bin);
    while(bin>0)
    {
        rem=bin%10;
        dec=dec+rem*base;
        bin=bin/10;
        base=base*2;
    }
    printf("Decimal is %d",dec);
    return 0;
}
