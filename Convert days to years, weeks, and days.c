#include <stdio.h>

int main() {
    long days;
    
    printf("Enter number of days :\n");
    scanf("%ld",&days);
    
    printf("Days : %ld\n",days);
    printf("Weeks : %lf\n", days/7);
    printf("Years : %lf\n", days/ 365);
    
    
    
    return 0;
}