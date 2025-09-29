#include<stdio.h>

int main()   {
    
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    if (n<0)
    {
     printf("this number isn't a natural number.");
    }
    else printf("this number is a natural number.");

     return  0;

}