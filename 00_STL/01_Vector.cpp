#include <bits/stdc++.h>
using namespace std;

int main() {

    // 1️ vector declaration
    vector<int> v;

    // 2️ push_back() → element add at end
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // v = {10, 20, 30}

    // 3️ size() → number of elements
    cout << "Size: " << v.size() << endl;


    
    // 4️ capacity() → allocated memory
    cout << "Capacity: " << v.capacity() << endl;




    // 5️ print vector (range-based loop)
    cout << "Vector elements: ";
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;




    // 6️ access elements
    cout << "First element: " << v[0] << endl;
    cout << "Second element: " << v.at(1) << endl; 




    // 7️ front() and back()
    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;




    // 8️ pop_back() → remove last element
    v.pop_back();   // removes 30
    // v = {10, 20}




    // 9️ insert() → insert at any position
    v.insert(v.begin() + 1, 15);
    // v = {10, 15, 20}



    // 10 erase() → remove element
    v.erase(v.begin() + 1);
    // v = {10, 20}



    // 1️1 clear() → remove all elements
    // v.clear();



    // 1️2️ empty() → check vector empty or not
    if(v.empty())
        cout << "Vector is empty" << endl;
    else
        cout << "Vector is NOT empty" << endl;



    // 1️3️ sort()
    sort(v.begin(), v.end());


    // 1️4️ reverse()
    reverse(v.begin(), v.end());


    // Final print
    cout << "Final vector: ";
    for(int x : v){
        cout << x << " ";
    }

    return 0;
}
