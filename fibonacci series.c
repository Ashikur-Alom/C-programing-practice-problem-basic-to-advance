# include <stdio.h>

    int fibonacci(int num){

    if(num == 0)      //Base condition
        return 0;
    else if(num == 1) //Base condition
        return 1;
    else 
        return fibonacci(num-1)+fibonacci(num-2); 
}

int main() {
    int num,fibo;
    printf("enter your expected fibonacci number:");
    scanf("%d",&num);

    fibo = fibonacci(num);
    printf("the %d th fibonacci number is %d",num,fibo);

    return 0;
}

