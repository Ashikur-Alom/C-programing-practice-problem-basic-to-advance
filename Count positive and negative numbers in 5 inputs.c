#include<stdio.h>

int main(){
    int num[5];
    int positive=0,negative=0;
    
    for(int i=0; i<5; i++){
        printf("\n %dth number:",i);
        scanf("%d",&num[i]);
    }
    
    for(int i=0; i<5; i++){
        printf("\n%d",num[i]);
    }
    
    for(int j=0; j<5; j++){
        
        if(num[j]>0){
            positive++;
        }else if(num[j]<0){
            negative++;
        }
    }
    
    printf("\nNumber of positive Numbers:%d",positive);
    printf("\nNumber of negative Numbers:%d",negative);
    
    
    return 0;
}