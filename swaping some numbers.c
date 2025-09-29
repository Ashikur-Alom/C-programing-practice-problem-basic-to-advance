#include<stdio.h>

void swapNumbers(int num1,int num2){
    int swap;
    swap = num1;
    num1 = num2;
    num2 = swap;

    printf("after swaping the numbers.\n\nthe swap numbers are a= %d and b=%d\n\n",num1,num2);

}

int main() {
    int num1,num2;
    printf("enter 1st number a=");
    scanf("%d",&num1);

    printf("enter 2nd number b=");
    scanf("%d",&num2);

    printf("befor swaping the numbers.\n\nthe numbers are a=%d and b=%d\n\n",num1,num2);

    swapNumbers(num1,num2);
    
   
    return 0;
}