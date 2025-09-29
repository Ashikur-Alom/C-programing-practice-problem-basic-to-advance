#include<stdio.h>
#include<math.h>

int main() { 
    
    float a,b,area;
    printf("enter a value of first side :");
    scanf("%f",&a);

    printf("enter a value of second side :");
    scanf("%f",&b);

    

    if (a<=b)
    {
        printf("wrong input.enter a valid input.");
    }
    else {
        area = (b/4)*sqrt(a*a-b*b);
    printf("the area is :%f",area);
    }

    return  0;

}
