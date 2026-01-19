#include <iostream>
#include <string>
using namespace std;

    string removeOccurrences(string s, string part) {
        int pos = s.find(part);   // find the postion of part in string s
        while(pos != string::npos){   // jabtak postion mil rha h tbtk run loop
            s.erase(pos,part.length()); //erase the substring
            pos = s.find(part);           // again find the position of part in s
        }
        return s;
    }

int main() {
    
    string s = "abcdeabcaghcd";
    string part = "abc";

    string result = removeOccurrences( s , part );

    cout <<  result << endl;
    
    return 0;

}