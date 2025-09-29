#include<stdio.h>

int main(){

    int number[5],total = 0;

    printf("Enter first number: \n");
    scanf("%d",&number[0]);

    printf("Enter second number: \n");
    scanf("%d",&number[1]);

    printf("Enter third number: \n");
    scanf("%d",&number[2]);

    printf("Enter fourth number: \n");
    scanf("%d",&number[3]);

    printf("enter fifth number: \n");
    scanf("%d",&number[4]);


    //check odd numbers and sum those
    for(int j = 0; j < 5; j++ ){

        if((number[j] % 2) != 0){

            total += number[j];

        }
    }


    printf("total value of these odd numbers: %d",total);


    return 0;
}