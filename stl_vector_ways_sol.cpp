#include<iostream>
#include<vector>
using namespace std;

template <class t>
void display(const vector<t>& v); // Use const reference for efficiency

int main() {
    // WAYS TO INITIALIZE VECTORS :-

    vector<int> v1;    // ZERO-LENGTH VECTOR
    v1.push_back(3);
    display(v1);  // Display v1

    // 4-element "character" vector with initial values
    vector<char> v2 = {'a', 'b', 'c', 'd'}; 
    // Adding more elements
    v2.push_back('3');
    v2.push_back('r');
    display(v2);  // Display v2

    // Vector v3 initialized with v2
    vector<char> v3(v2);  // Copy elements from v2
    v3.push_back('e');
    display(v3);  // Display v3

    // Uncomment if you want to display a vector of doubles (14 elements, all 6)
    // vector<double> v4(14, 6);  // 14 elements, all set to 6
    // display(v4);  // Display v4

    return 0;
}

template <class t>
void display(const vector<t>& v) {
    cout << "Displaying vector: ";
    for (size_t i = 0; i < v.size(); i++) {
        cout << v.at(i) << ' ';  // Display each element followed by a space
    }
    cout << endl;  // Print a newline after displaying the vector
}
