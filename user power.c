#include<stdio.h>
#include<math.h>

int powfunction(int n,int power);

int main() {
    int n,power;

    printf("enter a number:");
    scanf("%d",&n);

    printf("enter a power:");
    scanf("%d",&power);

    powfunction(n,power);

    return 0;
}

int powfunction(int n,int power) {

    if (n != 0 && power != -1)
    {
        power = pow(n,power);
        printf("the final value is %d",power);
    }
    
    return power;
}
