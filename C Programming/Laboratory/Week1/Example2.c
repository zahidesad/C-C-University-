#include <stdio.h>

int main(){
    char char1, char2, char3;
    char highestChar;

    printf("Enter three characters: ");
    scanf(" %c %c %c", &char1, &char2, &char3);

    highestChar = char1;

    if (char2 > highestChar)
    {
        highestChar = char2;
    }
    if(char3 >highestChar)
    {
        highestChar = char3;
    }

    printf("The character with the highest ASCII value is: %c and value is : %d", highestChar, highestChar);


    return 0;
}