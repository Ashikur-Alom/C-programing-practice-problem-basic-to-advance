#include <stdio.h>
#include <math.h>

int main(){
    
    float x1,x2,y1,y2,distance;
    
    printf("value of x1: \n");
    scanf("%f",&x1);
    
    printf("value of y1: \n");
    scanf("%f",&y1);

    printf("value of x2: \n");
    scanf("%f",&x2);
    
    printf("value of y2: \n");
    scanf("%f",&y2);
    
    distance = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    
    printf("Distance between the points is : %.4f",distance);
    
    
    return 0;
}