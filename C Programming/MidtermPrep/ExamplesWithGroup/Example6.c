#include <stdio.h>
#include <stdlib.h>

typedef union uni
{
    int x; 
    double y;  
}uni;


int main() {
    uni u;

    u.y = 1.12123;
    u.x = 5;
    

    printf("X : %d , Y : %f " , u.x, u.y); 

            
    return 0;
}