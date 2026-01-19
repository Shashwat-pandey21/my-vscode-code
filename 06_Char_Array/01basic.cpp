#include <iostream>
using namespace std;

int main(){

    char name[100]; // Declare a character array of size 100

    cout << " Enter the name :";
    cin >> name;    // Take input string (space-terminated)

    for(int i=0;i<7;i++){  // Loop to print first 7 characters
        cout << "Index :" << i << " value :" << name[i] << endl;
    }

    int value = (int)name[8];
    cout << "Value of last index is:" << value << endl;

    return 0;
}
