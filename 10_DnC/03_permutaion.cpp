#include <iostream>
using namespace std;

void permutation(string &str, int i) {

    // base case
    if(i >= str.length()) {
        cout << str << " ";
        return;
    }

    //swapping
    for(int j = i; j < str.length(); j++) {

        swap(str[i], str[j]);      // swap

        permutation(str, i + 1);   // call rec

        swap(str[i], str[j]);      // un-choose (backtrack) => to recreate original string
    }
}

int main() {

    string str = "abc";

    permutation(str, 0);

    cout << endl;

    return 0;
}
