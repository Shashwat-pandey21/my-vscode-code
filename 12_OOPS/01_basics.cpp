#include<iostream>
using namespace std;


    class Animal{

        public:
        // state/property

        int age;
        char name;

        // behaviour 

        void eat{
            cout << "Eating" << endl;
        }

        void drink{
            cout <<"Drinking" << endl;
        }
    };

int main(){

    // Object Creation 

    //Static
    Animal Dog;

    //access property of Object 
    DOg.age = 12;
    Dog.name = "Sheru";

    cout << "Age of Dog :"  << Dog.age <<endl;
    cout << "Name of Dog : " << Dog.name << endl;

    Dog.eat();
    Dog.drink();

    //dynamic

}