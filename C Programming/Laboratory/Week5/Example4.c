#include <stdio.h>
#include <stdlib.h>
#define SIZE 4



//ÇOK ÖNEMLİ KESİNLİKLE VİZEDE ÇIKAR

int sum(int a, int b){
    return a+b; //8
}

int avg(int a, int b){
    return (a+b)/ 2; //4
}

int divide(int a, int b){
    return a/b; //1
}

int multiply(int a, int b){
    return a*b; //15
}

void *returnMinResult(int a , int b){
    int(*funcs[])(int,int) = {sum,avg,divide,multiply};  
    int min = funcs[0](a,b);
    int (*result) (int,int) ;  

    printf("Addres of sum : %d\n", sum);
    printf("Addres of avg : %d\n", avg);
    printf("Addres of divide : %d\n", divide);
    printf("Addres of multiply : %d\n", multiply);

    for (int i = 0; i < SIZE; i++) {       
        if (min > funcs[i](a,b))
        {
            min = funcs[i](a,b);
            result = funcs[i];
        }
        
    }

    printf("Minimum addres : %d\n" , result);
    return result;
}


int main() {
    int a = 5;
    int b = 3;

    printf("Minimum addres :%d" , (*returnMinResult)(a,b));

    return 0;
}