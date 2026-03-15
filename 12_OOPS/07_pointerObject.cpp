#include <iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
};

// function me pointer pass kiya hai
void change(Cricketer* c){
    // c ek pointer hai
    // c->avg matlab object ka avg
    c->avg = 68.9;  //(*c).avg = 68.9
}

int main(){

    Cricketer c1("Virat Kohli",25000,55.2);

    // object ka address pointer me store kiya
    Cricketer* p1 = &c1;

    // pointer se object ke member access kar rahe
    cout << p1->runs << endl;   // same as c1.runs

    cout << c1.avg << endl;

    // pointer se value change ki
    p1->avg = 77.5;   // c1.avg = 77.5

    cout << c1.avg << endl;

    return 0;
}
