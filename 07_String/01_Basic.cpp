#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;  // creating string

    getline(cin, str);  // input from user

    cout << str << endl;  // output

    // Basic Functions
    cout << "Length : " << str.length() << endl;  // length of string
    cout << "isEmpty : " << str.empty() << endl;  // check if string is empty

    str.push_back('a');  // push a character at the end
    cout << "After push_back: " << str << endl;

    str.pop_back();  // remove last character
    cout << "After pop_back: " << str << endl;

    // substring starting at index 5, of length 9 (make sure str is long enough!)
    if (str.length() >= 14) {
        cout << "Substring: " << str.substr(5, 9) << endl;
    } else {
        cout << "String too short for substr(5, 9)" << endl;
    }

    // Compare function
    string a = "Love";
    string b = "Lover";

    if (a.compare(b) == 0) {
        cout << "a and b are exactly same string" << endl;
    } else {
        cout << "a and b are not same string" << endl;
    }

    // Find function
    string sentence = "hello everyone how are you!";
    string target = "are";

    size_t index = sentence.find(target);
    if (index != string::npos) {
        cout << "'are' found at index: " << index << endl;
    } else {
        cout << "'are' not found in sentence" << endl;
    }

    // Replace function 
    string ptr = "This is my name";
    ptr.replace(0, 4, "Pandey");  // replacing first 4 chars in "ptr", not "str"
    cout << "After replace: " << ptr << endl;
    
    // erase function

    string z = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    str.erase(5,18);
    cout << "After erase:" << z << endl;
    return 0;
}
