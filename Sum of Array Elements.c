#include<stdio.h>

int sumOfarr(int arr[], int n) {
    int sum=0;
    
    for(int i=0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("\nEnter %d number of elements:\n ",n);
    for(int i=0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int total;
    total =  sumOfarr(arr, n);
    printf("the sum of array elements is %d",total);
    
    return 0;
}