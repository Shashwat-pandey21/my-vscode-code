#include <iostream>
#include <string.h>
using namespace std;

void  convertLowercase(char arr[]) {
    int n = strlen(arr);
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            arr[i] = arr[i] - 'A' + 'a';
        }
    }
}

int main() {
    char arr[100];

    cout << "Enter the word: ";
    cin.getline(arr, 100);

  convertLowercase(arr);

    cout << "Uppercase: " << arr << endl;

    return 0;

}