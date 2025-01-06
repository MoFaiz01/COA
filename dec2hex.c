#include<stdio.h>
int main()
{
    int dec,i=0,j,temp;
    char hex[10];
    printf("Enter decimal number = ");
    scanf("%d",&dec);
    while(dec>0)
    {
        temp=dec%16;
        if(temp<10)
        {
            temp=temp+48;
        }
        else
        {
            temp=temp+55;
        }
        hex[i++]=temp;
        dec=dec/16;
    }
    printf("Hexadecimal is ");
    for(j=i-1;j>=0;j--)
    {
        printf("%c",hex[j]);
    }
    return 0;
}
