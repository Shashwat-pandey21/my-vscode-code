#include <iostream>
#include <string.h>
using namespace std;

int getLength(char name[]){
    int length =0;
    int i =0;
    while(name[i] != '\0'){
        length++;
        i++;
    }

    return length;

}

int main(){

    char name[100];

    cout << "Enter the name : " ;
    cin >> name;

    cout << "Length of name is :" << getLength(name) << endl;
    cout << "Length of name is :" <<strlen(name) << endl;      //predefined function
    return 0;
} 