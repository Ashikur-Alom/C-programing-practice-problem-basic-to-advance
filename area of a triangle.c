#include<stdio.h>
#include<math.h>

int main() { 
    
    float a,area;
    printf("enter a value :");
    scanf("%f",&a);

    area = (sqrt(3)/4)*pow(a,3);
    printf("the area is :%f",area);
    return  0;

}
