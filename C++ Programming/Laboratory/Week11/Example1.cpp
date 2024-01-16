#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Car
{

private:
    string brand;
    string model;
    int year;
    int price;

public:
    Car()
    {
        brand = "";
        model = "";
        year = 0;
    }

    Car(const string &brand, const string &model, int year, int price)
    {
        this->brand = brand;
        this->model = model;
        this->year = year;
        this->price = price;
    }

    // Setter
    void setBrand(const string &brand)
    {
        this->brand = brand;
    }

    void setModel(const string &model)
    {
        this->model = model;
    }

    void setYear(int year)
    {
        this->year = year;
    }

    void setPrice(int price)
    {
        this->price = price;
    }
    // Getter
    string getBrand() const
    {
        return this->brand;
    }

    string getModel() const
    {
        return this->model;
    }

    int getYear() const
    {
        return this->year;
    }

    int getPrice() const
    {
        return this->price;
    }

    void displayInfo() const
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Price: " << price << endl;
    }

    void setCarDetails(string brand, string model, int price, int year)
    {
        this->brand = brand;
        this->model = model;
        this->price = price;
        this->year = year;
    }
};

class Seller
{
private:
    vector<Car> cars;

public:
    void addCar(const Car &car)
    {
        cars.push_back(car);
    }

    void displayInventory() const
    {
        cout << "Inventory:" << endl;
        for (const Car &car : cars)
        {
            car.displayInfo();
            cout << "----------" << endl;
        }
    }

    double calculateTotalPrice() const
    {
        double totalPrice = 0.0;
        for (const Car &car : cars)
        {
            totalPrice += car.getPrice();
        }
        return totalPrice;
    }
};

int main()
{
    Car c1("TOGG", "T10X", 2020, 9999);
    Car c2("Ford", "Mustang", 2019, 8888);
    cout << "----- TOGG INFO -----" << endl;
    c1.displayInfo();
    cout << "----- FORD INFO -----" << endl;
    c2.displayInfo();

    cout << "-------------------------------------" << endl;

    Seller seller;
    seller.addCar(c1);
    seller.addCar(c2);
    seller.displayInventory();
    cout << "Total Price of Cars: " << seller.calculateTotalPrice() << endl;

    return 0;
}
