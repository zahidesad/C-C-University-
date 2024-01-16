#include <stdio.h>

int main(){
    int input;
    int total = 0;

    do{
        printf("Please enter a number :");
        scanf("%d" , &input);
        total +=input;
        
    }while (input !=-1);
    printf("You wrote -1 Total is : %d" , total);   

    return 0;
}