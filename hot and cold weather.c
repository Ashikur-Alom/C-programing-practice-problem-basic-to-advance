#include<stdio.h>

float hotAndcold(float temp){
    if (temp <= 20)
    {
        printf("the weather is cold.\n");

    }
    else printf("the weather is hot.\n");
 return 0;
}

int main() {
    float temp;
    printf("enter the temperature in celsius:");
    scanf("%f",&temp);

    hotAndcold(temp);

    return 0;
}

