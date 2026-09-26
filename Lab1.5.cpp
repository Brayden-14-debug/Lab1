#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
// Works for any type T that supports the > operator.
// (Passing by const reference avoids copying the whole vector;
//  the lab's header "vector<T> values" also works, it just makes a copy.)
template <typename T>
T findMax(const vector<T>& values) {
    T highest = values[0];              // assumes the vector is not empty
    for (size_t i = 1; i < values.size(); i++) {
        if (values[i] > highest) {
            highest = values[i];
        }
    }
    return highest;
}
 
int main() {
    vector<int> a = {4, 9, 2, 7};
    vector<double> b = {3.2, 8.7, 1.5, 6.4};
    vector<string> c = {"Apple", "Orange", "Banana"};
 
    cout << "Max of a (int):    " << findMax(a) << endl;
    cout << "Max of b (double): " << findMax(b) << endl;
    cout << "Max of c (string): " << findMax(c) << endl;
 
    return 0;
}