#include<stdio.h>
#include<math.h>

int main() { 
    int x,fx;
    printf("enter a value of x:");
    scanf("%d",&x);

    fx = pow(x,4)+5*x-3;
    printf("f(X)=%d",fx);
    
     return  0;

}