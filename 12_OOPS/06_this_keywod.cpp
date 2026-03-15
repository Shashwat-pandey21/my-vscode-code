#include <iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;

    // Constructor
    Cricketer(string name, int runs){

        // yaha parameter ka naam aur class ke variable ka naam same hai

        // 'this' current object ko point karta hai
        // this->name matlab object ka name
        // simple name matlab constructor ka parameter

        this->name = name;   // object ke name me parameter wala name store ho raha hai
        this->runs = runs;   // object ke runs me parameter wala runs store ho raha hai
    }
};

int main(){

    Cricketer c1("Virat Kohli",25000);
    Cricketer c2("Rohit Sharma",18000);

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2.name<<" "<<c2.runs<<endl;

}
