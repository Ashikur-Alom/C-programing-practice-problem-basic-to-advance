#include<stdio.h>
#include<math.h>

float squareroot(float n){
    float sqt;
    if (n<0)
    {
        printf("Error: cannot calculate a negative number.\n");

    }
    else sqt = sqrt(n);

    return sqt;
}

int main() {
    float n;
    printf("enter a number:");
    scanf("%f",&n);
    printf("the squre root of %f is = %f",n,squareroot(n));

    return 0;
}



    