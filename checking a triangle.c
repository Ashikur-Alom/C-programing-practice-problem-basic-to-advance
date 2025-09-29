#include<stdio.h>
#include<math.h>

int main()
 {
    float a,b,c,s,area;
    printf("enter 1st side:");
    scanf("%f",&a);

    printf("enter 2nd side:");
    scanf("%f",&b);

    printf("enter 3rd side:");
    scanf("%f",&c);
    
    if (((a+b)>c && (a+c)>b && (b+c)>a))
    {
        printf("it can be a tringle.\n");
        s = (a+b+c)/3;
        area  = sqrt(s*(a+b)*(b+c)*(a+c));
        printf("the area is %f",area);
        
    }
    else {
        printf("it can't be a tringle.");

    }
    

     return  0;

}
