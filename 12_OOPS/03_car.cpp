#include <iostream>
using namespace std;

//Class
class Car {
public:
    string brand;
    string color;
    int seats;
    string fuelType;
};

//create a print function 
void print(Car c){

    cout << c.brand << " " << c.color <<" " << c.seats << " " << c.fuelType << endl;

}

int main() {
    //  Objects
    Car car1;
    Car car2;
    Car car3;

    // Object 1
    car1.brand = "Tata";
    car1.color = "Black";
    car1.seats = 5;
    car1.fuelType = "Diesel";

    // Object 2
    car2.brand = "Honda";
    car2.color = "White";
    car2.seats = 5;
    car2.fuelType = "Petrol";

    // Object 3
    car3.brand = "Tesla";
    car3.color = "Red";
    car3.seats = 5;
    car3.fuelType = "Electric";

   
    print(car1);
    print(car2);
    print(car3);


    return 0;
}
