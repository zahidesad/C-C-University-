#include <stdio.h>
#include <stdlib.h>

typedef struct Car
{
    int price;
    char *model;
} Car;

typedef union unit
{
    Car car;
    int stop;
}unit;

typedef struct carHolder
{
    unit *unit;
    int flag;

} carHolder;


int main() {
    carHolder *carHolders = calloc(5,sizeof(carHolder));
    
    unit unit1;
    Car car1 = {.price = 10 , .model="TOGG"};
    unit1.car = car1;

    unit unit2;
    Car car2 = {.price = 100 , .model="BMW"};
    unit2.car = car2;

    unit unit3;
    Car car3 = {.price = 1000 , .model="MERCEDES"};
    unit3.car = car3;

    unit unit4;
    Car car4 = {.price = 102 , .model="FIAT"};
    unit4.car = car4;

    unit unit5;
    unit5.stop = 1;

    carHolder ch1 = {.unit=&unit1, .flag=0};
    carHolder ch2 = {.unit=&unit2 , .flag=0};
    carHolder ch3 = {.unit=&unit3 , .flag=0};
    carHolder ch4 = {.unit=&unit4 , .flag=0};
    carHolder ch5 = {.unit=&unit5 , .flag=0};

    carHolders[0] = ch1;
    carHolders[1] = ch2;
    carHolders[2] = ch3;
    carHolders[3] = ch4;
    carHolders[4] = ch5;

    int total = 0;
    carHolder *pCarHolders = carHolders;
    while (pCarHolders->flag==0)
    {
        total += pCarHolders->unit->car.price;
        pCarHolders++;
    }
    
    printf("%d", total);

    return 0;
}