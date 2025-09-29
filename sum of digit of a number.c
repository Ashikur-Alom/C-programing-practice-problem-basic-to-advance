#include<stdio.h>

int sumofdigit(int n);

int main() {

    int n;
    printf("enter  a number:");
    scanf("%d",&n);
    printf("the sum of %d is = %d",n,sumofdigit(n));
    return 0;
}

int sumofdigit(int n) {
    int sum=0,lastdigit;

    while (n !=0)
    {
        lastdigit= n%10;
        sum+=lastdigit;
        n /= 10;
    }
    return sum;
}