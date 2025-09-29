#include<stdio.h>

void reverse(int array[], int n) {
    int start=0,end = n-1,temp;
    
    while(start < end) {
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n,temp;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int array[n];
    
    printf("\nEnter %d number of elements \n",n);
    for(int i=0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    reverse(array, n);
    
    printf("\nreverse elements are: ");
    for(int i=0; i < n; i++) {
        printf("\t%d", array[i]);
    }
    
    return 0;
}