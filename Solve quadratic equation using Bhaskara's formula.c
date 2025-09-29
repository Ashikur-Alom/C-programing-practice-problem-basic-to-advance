#include<stdio.h>
#include<math.h>

int main(){
    //variable diclaretion
    int a,b,c,discriminant;
    
    //get input 3 numbers
    printf("\n Enter a value of a :");
    scanf("%d",&a);
    printf("\n Enter a value of b :");
    scanf("%d",&b);
    printf("\n Enter a value of c :");
    scanf("%d",&c);
    
    //calculate discriminant
    discriminant = (b*b) - (4*a*c);
    
    //check real numbers
    if(discriminant > 0 && a != 0){
        float root1,root2;
        
        //square root of discriminant
        discriminant = sqrt(discriminant);

        //calculate root1 and root2
        root1 = (-b + discriminant)/(2*a);  
        root2 = (-b - discriminant)/(2*a);  
        
        printf(" value of root1 is:%f\n",root1);
        printf(" value of root2 is:%f\n",root2);
    }else{
        printf(" it is not possible to find the roots.");
    }
    
    
    return 0;
}
