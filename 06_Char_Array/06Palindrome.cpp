#include <iostream>
#include <string.h>
using namespace std;

bool checkPalindrome(char word[]) {
    int i = 0;
    int j = strlen(word) - 1;

    while (i < j) {
        if (word[i] != word[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    char word[100];

    cout << "Write the Word: ";
    cin.getline(word, 100);

    bool isPalindrome = checkPalindrome(word);

    cout << "Palindrome Check: " << (isPalindrome ? "Yes" : "No") << endl;

    return 0;
}

