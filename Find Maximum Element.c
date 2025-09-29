#include<stdio.h>

int main() {
    int array[200],n,max = array[0];

    printf("enter the number of elements: ");
    scanf("%d", &n);

    printf("\nenter %d of elements:",n);
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }

    for(int i=0; i<n; i++){
        if(array[i]>max){
            max = array[i];
        }
    }

    printf("the maximum value is %d",max);
    return 0;
}