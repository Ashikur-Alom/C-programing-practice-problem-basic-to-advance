#include<stdio.h>
#include<string.h>

int main() {
    char random[100];
    int vowels = 0, consonant = 0;
    
    printf("Enter a random sentence: \n");
    fgets(random, 100,stdin);
    puts(random);
    
    for(int i = 0; random[i] != '\0'; i++) {
        
        if((random[i] >= 'a' && random[i] <= 'z') || (random[i] >= 'A' && random[i] <= 'Z')) {
            
             if(random[i] == 'A' || random[i] == 'E' || random[i] == 'I' || random[i] == 'O' || random[i] == 'U' || random[i] == 'a' || random[i] == 'e' || random[i] == 'i' || random[i] == 'o' || random[i] == 'u') {
                 vowels++;
             }else{
                 consonant++;
             }
        }
    }
    
    printf("\nNumber of vowles:%d",vowels);
    printf("\nNumbe of consonants:%d",consonant);
    
    return 0;
}
