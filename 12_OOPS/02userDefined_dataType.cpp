#include<iostream>
using namespace std;

class Student { //student is a new data type
public:
    string name ;
    int rollNo;
    float gpa;

};

class Car { 
public:
    string name ;
    int seats;
    float price;
    string type;

};

int main(){

    Student s1;                      // student -> class(blueprint), s1-> oject(real instances)
    s1.name = "Shashwat Pandey";
    s1.rollNo = 54;
    s1.gpa = 7.6;

    Student s2;
    s2.name = "Raj";
    // s2.rollNo = 34;
    cin >> s2.rollNo;
    s2.gpa = 9.3;


    cout << s1.name << " " << s1.rollNo << " " << s1.gpa << endl;
    cout << s2.name << " " << s2.rollNo << " " << s2.gpa << endl;


    Car c;

    c.name = "bmw";
    c.price = 1000.4;
    c.seats = 6;
    c.type = "XUV";

    cout << c.name << " " << c.seats << " " << c.price << " " << c.type << endl;

    return 0;
}