#include <stdio.h>
#include <string.h>

void reverseString(char name[]){
    
    int length = strlen(name);
    int temp;
    //Z A H İ D
    for (int i = 0; i < length / 2; i++)
    {
        temp = name[i];
        name[i] = name[length-1-i]; 
        name[length-1-i] = temp;
    }
    

}


int main(){

    char text[200];

    printf("Please enter a name :");
    scanf("%s" , text);
    
    reverseString(text);
    printf("%s" , text);



    return 0;
}