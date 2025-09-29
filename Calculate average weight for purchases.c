#include <stdio.h>

int main() {
    
    float weight_item1, weight_item2,avg_weight_for_purchases;
    int numOfitem1, numOfitem2;
    
    printf("Weight_item-1: \n");
    scanf("%f", &weight_item1);
    
    printf("Number of item1:\n");
    scanf("%d",&numOfitem1);
    
    printf("Weight_item-2: \n");
    scanf("%f", &weight_item2);
    
    printf("Number of item2:\n");
    scanf("%d",&numOfitem2);
    
    avg_weight_for_purchases = ((weight_item1 * numOfitem1) + (weight_item2 * numOfitem2)) / (numOfitem1 + numOfitem2);
    
    printf(" Average weight for purchases : %f",avg_weight_for_purchases);
    
    
    
    return 0;
}