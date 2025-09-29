#include<stdio.h>
#include<math.h>

int main()   {
    
    int n;
    printf("enter your obtained marks:");
    scanf("%d",&n);

    if (n<40)
    {
        printf("your are faild.better luck next time.");
    }
    else printf("you are passed.keep remaining this.");

     return  0;

}