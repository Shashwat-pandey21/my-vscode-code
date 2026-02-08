#include <iostream>
using namespace std;

//class -> blueprint
class Car {
public:
    int price;
    string brand;
    string color;
    int seats;
    string fuelType;

    
    Car(){  //default counstructor

    }

   
    Car(int p,string b,string c, int s, string f){   //parameterized constructor -> like function but without return type(use to initialize values of objects)

        price = p;
        brand = b;
        color = c;
        seats = s;
        fuelType = f;
    }
};

// create a function to print all values 
void print(Car c){

    cout << c.price << " " <<c.brand << " " << c.color <<" " << c.seats << " " << c.fuelType << endl;

}

int main() {
    
    //objects -> real life instances
    Car car1(25000,"Tata","Black",5,"Diesel");
    Car car2(35000,"Honda","White",5,"Petrol");
    
    Car car3;
    car3.brand = "Tesla";
    car3.color = "Red";
    car3.seats = 5;
    car3.fuelType = "Electric";
   
    print(car1);
    print(car2);
    print(car3);


    return 0;
}
