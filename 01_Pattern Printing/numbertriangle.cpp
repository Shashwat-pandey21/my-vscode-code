#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";  // Prompt for input
    cin >> n;                    // Get user input

    for (int row = 0; row < n; row++) {
        for (int col = 0; col <= row; col++) {
            cout << col + 1 << " "; // Print numbers
        }
        cout << endl;              // New line after each row
    }
    return 0;
}
