#include <stdio.h>

void printArray(int numbers[], int length){
    

    for (int i = 0; i < length; i++) {
        printf("%d. element of array = %d\n" , (i+1) , numbers[i]);
    }

}


int main() {
    int numbers[] = {1,2,3,4,5};
    int length = sizeof (numbers)/ sizeof(numbers[0]);

    printArray(numbers , length);
            
    return 0;
}