#include <iostream>
#include <vector>
using namespace std;
 
void printVector(const vector<int>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
 
int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};
 
    // 1. Display the original vector
    cout << "Original:        ";
    printVector(numbers);
 
    // 2. Add 60 and 70
    numbers.push_back(60);
    numbers.push_back(70);
 
    // 3. Display after additions
    cout << "After additions: ";
    printVector(numbers);
 
    // 4. Remove the last element
    numbers.pop_back();
 
    // 5. Display again
    cout << "After removal:   ";
    printVector(numbers);
 
    // 6. Final size and capacity
    cout << "Final size: " << numbers.size() << endl;
    cout << "Final capacity: " << numbers.capacity() << endl;
    cout << "Last element: " << numbers.back() << endl;
 
    return 0;
}