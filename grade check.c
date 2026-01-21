#include <stdio.h>

int main() {
float marks;    
scanf("%f", &marks);

if(marks<40) {
    printf("F\n");
}else if(marks>=40 && marks<45) {
    printf("D\n");
}else if(marks>=45 && marks<50) {
    printf("C");
}else if(marks>=50 && marks<55) {
    printf("C+");
}else if(marks>=55 && marks<60) {
    printf("B-\n");
}else if(marks>=60 && marks<65) {
    printf("B");
}else if(marks>=65 && marks<70) {
    printf("B+");
}else if(marks>=70 && marks<75) {
    printf("A-\n");
}else if(marks>=75 && marks<80) {
    printf("A");
}else if(marks>=80 && marks<=100) {
    printf("A+");
}else {
    printf("enter valid marks");
}
    
    
    return 0;
}
