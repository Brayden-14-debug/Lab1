#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    vector<int> scores = {78, 92, 65, 88, 95, 73};
 
    // Assume the first value is the highest so far
    int highest = scores[0];
 
    // Compare each remaining element; update when a bigger one is found
    for (size_t i = 1; i < scores.size(); i++) {
        if (scores[i] > highest) {
            highest = scores[i];
        }
    }
 
    cout << "Highest score: " << highest << endl;
    return 0;
}