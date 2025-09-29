#include<stdio.h>

int main()   {
    
   int num;
   printf("enter your marks:");
   scanf("%d",&num);

    if (num>100)
   {
    printf("enter your valid number.");
   }
   if (num>=80 && num<=100)
   {
    printf("your grade is A+");
   }
   else if (num<80 && num>=70)
   {
    printf("your grade is A");
   }
   else if (num<70 && num>=60)
   {
    printf("your grade is A-");
   }
    else if (num<60 && num>=50)
   {
    printf("your grade is B");
   }
    else if (num<50 && num>=40)
   {
    printf("your grade is C");
   }
    else if (num<40 && num>=33)
   {
    printf("your grade is D");
   }
    else if (num<33)
   {
    printf("your grade is F");
   }
   
     return  0;

}