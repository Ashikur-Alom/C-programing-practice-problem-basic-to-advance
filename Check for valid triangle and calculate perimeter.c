#include<stdio.h>

int main(){
    float a,b,c;
    
    printf("\nEnter a vlaue of first side:");
    scanf("%f",&a);
    printf("\nEnter a vlaue of second side:");
    scanf("%f",&b);
    printf("\nEnter a vlaue of third side:");
    scanf("%f",&c);
    
    if((a + b) > c && (a + c) > b && (b + c) > a){
        printf("\nTriangle available for these values.");
        
        int perimeter;
        perimeter = a + b + c;
        
        printf("\n\nPerimeter = %d",perimeter);
    }else{
        printf("\n\nTriangle is not available for these values");
    }
    
    return 0;
}