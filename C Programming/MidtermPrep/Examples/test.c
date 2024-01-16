#include <stdio.h>
#include <stdlib.h>

#define SWAP(a,b,t)(a=b, t=b, b=t)
int main() 
{
    int x = 10 , y= 20;
    int t;

    SWAP(x,y,t);

    printf("%d , %d" , x,y);
                   
            
    return 0;
}