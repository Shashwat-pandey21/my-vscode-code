#include <iostream>
using namespace std;

int main() {
    int   row, column ,n;
    cin >> n;
    
    for (row = 0; row < n; row++) {
        for (column = 0; column < n+1; column++) {
            cout << "*  "; 
        }
        cout << endl; 
    }

    return 0;
}
