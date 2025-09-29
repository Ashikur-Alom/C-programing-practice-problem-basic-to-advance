#include<stdio.h>

void countEvenOdd(int arr[], int n) {
    int even = 0, odd = 0;
    for(int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        }else if(arr[i] % 2 != 0){
            odd++;
        }
    }
    printf("\nNumber of even numbers is = %d", even);
    printf("\nNumber of odd numbers is = %d", odd);
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
    
    countEvenOdd(arr, n);
    
    return 0;
}