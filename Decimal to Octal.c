#include<stdio.h>

long decimailToOctal(int decimalNum);

int main()
{
    long octal;
    int decimalNum;
	printf("\n\n Function : convert decimal to octal :\n");
	printf("-------------------------------------------\n");    
    printf(" Input any decimal number : ");
    scanf("%d",&decimalNum);
    octal = decimailToOctal(decimalNum);
    printf("\n The octal value is : %ld\n\n",octal);

    return 0;
}
long decimailToOctal(int decimalNum)
{
    long octal=0,remainder,f=1;
    while(decimalNum != 0)
    {
         remainder =decimalNum % 8;
         octal = octal + remainder * f;
         f = f * 10;
         decimalNum = decimalNum / 8;
    }
    return octal;
}
