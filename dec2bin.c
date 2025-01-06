#include<stdio.h>
int main()
{
    int binary[32],dec,i=0,j;
    printf("Enter any decimal number = ");
    scanf("%d",&dec);
    while(dec>0)
    {
        binary[i]=dec%2;
        dec=dec/2;
        i++;
    }
    printf("Binary number = ");
    for(j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
    return 0;
}
