#include <iostream>
using namespace std;

int main(){
    char ch[100];
    
    cout << "Enter your full name : " ;

    cin.getline(ch,100);

    cout << "  Your full name is :" << ch << endl;
}