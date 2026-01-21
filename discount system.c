#include <stdio.h>

int main() {
float tk,discount,dis_price;
scanf("%f",&tk);

if(tk>1000 && tk<5000) {
    discount=(tk*5)/100;
    dis_price=tk-discount;
    printf("%.2f\n", dis_price);
}else if(tk>5000) {
    discount=(tk*15)/100;
    dis_price=tk-discount;
    printf("%.2f\n", dis_price);
}
    
    
    return 0;
}
