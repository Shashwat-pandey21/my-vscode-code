#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rno;
    float gpa;

    // Default Constructor
    Student() {

    }

    //  parameter constructor
    Student(string n, int r) {
        name = n;
        rno = r;
        gpa = 0.0;
    }


    Student(string n, int r, float g) {
        name = n;
        rno = r;
        gpa = g;
    }

    // Copy Constructor
    Student(Student &s) {
        name = s.name;
        rno = s.rno;
        gpa = s.gpa;
        cout << "Copy Constructor Called\n";
    }

    void display() {
        cout << name << " " << rno << " " << gpa << endl;
    }
};

int main() {

    Student s1("Raghav", 76, 8.2);

    Student s2;
    s2.name = "Himanshu";
    s2.rno = 88;
    s2.gpa = 6.2;

    Student s3("Gagan", 13);


    Student s6 = s1;   // deep Copy 

    s6.name = "Manish";

    // Copy using ()
    Student s7(s1);    // deep copy 
    s7.name = "Rajesh";

    cout << "\nAll Students:\n";
    s1.display();
    s2.display();
    s3.display();
    s6.display();
    s7.display();

    return 0;
}
