#include <iostream>
using namespace std;

int main() {
    int a = 5;  // Declare variable 'a'

    int *ptr = &a;  // Pointer 'ptr' stores address of 'a'

    cout << "Value of a: " << a << endl;  // Print value of 'a'
    cout << "Address of a: " << &a << endl;  // Print address of 'a'
    cout << "Value stored at ptr is: " << ptr << endl;  // Print address stored in 'ptr'
    cout << "Value ptr is pointing to is: " << *ptr << endl;  // Print value at 'ptr'
    cout << "Address of ptr: " << &ptr << endl;  // Print address of 'ptr'

    //Null Pointer
    int *cpt = 0;
    cout << *cpt << endl;
    return 0;
}
