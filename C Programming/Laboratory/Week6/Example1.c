#include <stdio.h>
#include <stdlib.h>

typedef struct Driver
{
    int unitSalary;
    char type;
    int duration;
} Driver;

typedef struct Car
{
    int price;
    int speed;
    char *model;
    Driver driver;
    Driver *drivers;
    int driverCount;
    void (*addDriver)(struct Car *, Driver);
} Car;

int calculateCarPrices(Car *cars, int length)
{
    int total = 0;
    for (int i = 0; i < length; i++)
    {
        total += cars[i].price;
    }
    return total;
}

int calculateTotalPayment(Car *cars, int length)
{
    int total = 0;
    for (int i = 0; i < length; i++)
    {
        if (cars[i].driver.type == 'B')
        {
            total += cars[i].driver.unitSalary;
        }
    }
    return total;
}

void addDriver(struct Car *self, Driver driver)
{
    self->drivers[self->driverCount] = driver;
    self->driverCount = self->driverCount + 1;
}

int main()
{
    Driver driver1 = {100, 'A', 10};
    Driver driver2 = {110, 'B', 9};
    Driver driver3 = {90, 'B', 12};

    Car car1 = {.price = 1000, .speed = 120, .model = "Togg", .driver = driver1, .driverCount = 0, .addDriver = addDriver};
    car1.drivers = malloc(sizeof(Driver) * 10);
    Car car2 = {.price = 1200, .speed = 120, .model = "BMW", .driver = driver2, .driverCount = 0, .addDriver = addDriver};
    car2.drivers = malloc(sizeof(Driver) * 10);
    Car car3 = {.price = 1100, .speed = 100, .model = "Tesla", .driver = driver3, .driverCount = 0, .addDriver = addDriver};
    car3.drivers = malloc(sizeof(Driver) * 10);

    Car cars[3] = {car1, car2, car3};

    car1.addDriver(&car1, driver1);
    car1.addDriver(&car1, driver2);

    printf("Total Price: %d\n", calculateTotalPayment(cars, 3));
    printf("Second Driver's salary of Car1: %d\n", car1.drivers[1].unitSalary);
    return 0;
}
