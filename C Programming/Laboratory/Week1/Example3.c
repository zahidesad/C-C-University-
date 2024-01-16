#include <stdio.h>



int main(){
    char array[10];
    int index = 0;
    char input;

    do
    {     
      printf("Write a chars : ");
      scanf (" %c" , &input);

      if (input == 'c')
      {
        printf("%s\n" , array);
      }

        array[index] = input;
        index++;

    } while (input != 'x');
    

    return 0;
}