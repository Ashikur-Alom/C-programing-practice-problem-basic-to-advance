#include <stdio.h>
#include <string.h>

int main() {
    char string[100],temp;
    int start=0,end;
    
    printf("Enter a word:");
    fgets(string, 100, stdin);
    puts(string);
    
    end = strlen(string) - 1;
    while(start < end) {
        temp = string[start];
        string[start] = string[end];
        string[end] = temp;
        
        start++;
        end--;
    }
    
    printf("the reversed string is: \t%s", string);
    
    return 0;
}

