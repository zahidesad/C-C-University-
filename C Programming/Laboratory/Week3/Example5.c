#include <stdio.h>

void changeValues(int *a, int *b){

    int temp= *a;
    *a = *b;
    *b= temp;    

    //printf("a : %d , b : %d \n" , *a , *b);
}

int main(){

    int x = 5;
    int y = 10;

    changeValues(&x,&y);
    printf("x : %d , y : %d \n" , x , y);


    return 0;   
}