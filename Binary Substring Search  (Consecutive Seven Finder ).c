#include <stdio.h>

int main() {
    int cur_char,pre_char; 
    int count = 0; //initialize counting from 0
    int danger_found = 0; //initialize danger_found as flase

    //first,read the very first character to initialize the process
     //here getchar() is a function which take input from user
    pre_char = getchar();

    //if the input is empty,there's no danger
    //here EOF means End Of File
    if (pre_char == '\n' || pre_char == EOF) {
        printf("NO DANGER FOUND");
        return 0;
    }

    //successfully read first character,start count from 1
    count = 1;

    //start a loop for check
    while ((cur_char = getchar()) != '\n' && cur_char != EOF){
        if (cur_char == pre_char) {
            //if the character is same as previous,then count
            count++;
        } else {
            //if the character is not same as previous,start count from current character
            count = 1;
        }

        //update the previous character for the next iteration.
        pre_char = cur_char;

        //check that the currnet character count is equal to 7 or above 7
        if (count >= 7) {
            danger_found = 1;
            break; //if the condition match,no need to count anymore,exit from loop
        }
    }

    //final check
    if (danger_found == 1) {
        printf("DANGER FOUND!!!!");
    } else {
        printf("NO DANGER FOUND");
    }

    return 0;
}
