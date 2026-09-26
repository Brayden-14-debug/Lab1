#include <iostream>
#include <vector>
using namespace std;
 
// Helper to print every element of the vector
void printVector(const vector<int>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
 
int main() {
    // Step 1: Create an empty vector of integers
    vector<int> scores;
 
    // Step 2: Add values with push_back()
    scores.push_back(78);
    scores.push_back(92);
    scores.push_back(65);
    scores.push_back(88);
    scores.push_back(95);
 
    // Step 3: Display all values using a loop
    cout << "Scores: ";
    printVector(scores);
 
    // Step 4: Display size and capacity
    cout << "Size: " << scores.size() << endl;
    cout << "Capacity: " << scores.capacity() << endl;
 
    // Step 5: Remove the last element, then display again
    scores.pop_back();
    cout << "\nAfter pop_back():" << endl;
    cout << "Scores: ";
    printVector(scores);
    cout << "Size: " << scores.size() << endl;
    cout << "Capacity: " << scores.capacity() << endl;
 
    return 0;
}