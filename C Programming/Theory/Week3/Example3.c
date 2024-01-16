#include <stdio.h>

int main() {
    int a ;
    int b ;

    int *p1 = &a;
    int *p2 = &b;

    printf("Addres of p1 %d \n" ,p1);
    printf("Addres of p2 %d \n" ,p2);


    printf("substraction of p2-p1 %d \n" , p1-p2);   // addresleri çıkarıp data type'ına bölüyor yani 4/4 = 1         
            
    return 0;
}