#include <stdio.h>

int main() {
int x,y;
float total, cq=4.00, xs=4.50, xb=5.00, ts=2.00, r=1.50;
scanf("%d %d", &x, &y);

if(x<=5) {
    if(x==1) {
        total=cq*y;
        printf("Total: R$ %.2f\n", total);
    }else if(x==2) {
        total=xs*y;
        printf("Total: R$ %.2f\n", total);
    }else if(x==3) {
        total=xb*y;
        printf("Total: R$ %.2f\n", total);
    }else if(x==4) {
        total=ts*y;
        printf("Total: R$ %.2f\n", total);
    }else {
        total=r*y;
        printf("Total: R$ %.2f\n", total);
    }
}else {
    return 1;
}
    
    
    return 0;
}
