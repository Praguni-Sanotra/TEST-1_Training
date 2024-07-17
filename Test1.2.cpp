//2)write a progam to find the  max element from the list 
#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    vector<int> numbers = {7, 2, 8, 4, 5, 10, 1};
    if (!numbers.empty()) {
        auto maxElement = max_element(numbers.begin(), numbers.end());
        cout << "The maximum element is: " << *maxElement << endl;
    } else {
        cout << "The list is empty." << endl;
    }

    return 0;
}
