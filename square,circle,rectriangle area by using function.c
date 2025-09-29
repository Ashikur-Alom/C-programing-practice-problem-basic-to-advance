#include<stdio.h>
#include<math.h>

//declaretion of function.
float square_area(float side);
float circle_area(float radious);
float rectriangle_area(float a,float b);

int main()   {
      float side,raidous,a,b;
      printf("enter a value of side , raidous , and a ,b :");
      scanf("%f %f %f %f",&side,&raidous,&a,&b);

      //function calling//
      printf("the area of your square is %f\n",square_area(side));
      printf("the area of your circle is %f\n",circle_area(raidous));
      printf("the area of your rectriangle is %f\n",rectriangle_area(a,b));

      return  0;
   }

   float square_area(float side){
      return pow(side,2) ;
   }

   float circle_area(float radious){
      return 3.1416 * pow(radious,2);
   }

   float rectriangle_area(float a,float b){
      return a * b ;
   }




