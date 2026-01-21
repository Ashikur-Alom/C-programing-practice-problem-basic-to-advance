#include <stdio.h>

int main() {
int a,b,c;
scanf("%d %d %d", &a, &b, &c);

if((a>b && b>c) || (c>b && b>a)) {
    printf("2nd largest %d\n", b);
}else if((b>a && a>c) || (c>a && a>b)) {
    printf("2nd lagest %d\n", a);
}else if((b>c && c>a) && (a>c || c>b)) {
    printf("2nd largest %d\n", c);
}
    
    
    
    
    return 0;
}
