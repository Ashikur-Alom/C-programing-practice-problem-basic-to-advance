#include<stdio.h>

int main() {
    int i;
    int array [10];
    
    printf("Input 10 numbers in the array: \n");
    
    //input
    for(i=0; i<10; i++){
        printf("Number -%d :",i);
        scanf("%d",&array[i]);
    }
    
    //output
    printf("The numbers in array are: \t");
    for(i=0; i<10; i++){
        printf("%d \t", array[i]);
    }
    printf("\n");
    
    return 0;
}