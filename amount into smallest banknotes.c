#include <stdio.h>

int main(){
    
    int amount,total;
    
    printf("Enter amount: \n");
    scanf("%d",&amount);
    
    printf("There are: \n");
    
    total = amount/100;
    printf("%d Notes of 100  \n",total);
    amount-= (total*100);
    
    total = amount/50;
    printf("%d Notes of 50  \n",total);
    amount -= (total*50);
    
    total = amount/20;
    printf("%d Notes of 20  \n",total);
    amount -= (total*20);
    
    total = amount/10;
    printf("%d Notes of 10 \n",total);
    amount -= (total*10);
    
    total = amount/5;
    printf("%d Notes of 5  \n",total);
    amount -= (total*5);
    
    total = amount/2;
    printf("%d Notes of 2 \n",total);
    amount -= (total*2);
    
    total = amount/1;
    printf("%d Notes of 1  \n",total);
    
    
    
    
    return 0;
}