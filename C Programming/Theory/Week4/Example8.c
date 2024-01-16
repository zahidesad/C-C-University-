#include <stdio.h>
#include <stdlib.h>

void filterMod2(int a){
    if (a%2 ==0){
        printf("%d\n",a);
    }
}

void filterLessThen4(int a){
    if (a<4){
        printf("%d\n",a);
    }
}

void displayArray(int numbers[] , void (*filter1)()){
    for (int i = 0; i < 5; i++) {
        filter(numbers[i]);
    }
}

int main() {
    int numbers [] = {1,2,3,4,5};

    displayArray(numbers, filterMod2);            
            
    return 0;
}