#include <stdio.h>

int main() {
float att,midmarks;
scanf("%f", &att);

if(att<75) {
    printf("not eligible\n");
}else {
    if(att>74 && att<=100) {
        scanf("%f", &midmarks);
        if(midmarks<10) {
            printf("not eligible\n");
        }else {
            printf("eligible\n");
        }
    }else {
        printf("invalid input\n");
    }
}
    
    return 0;
}
