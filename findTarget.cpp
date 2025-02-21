#include <iostream>
#include <vector>

using namespace std;

bool findTarget(const vector<int>& arr, int target) {
    for (int num : arr) {
        if (num == target) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 3;

    if (findTarget(arr, target)) {
        cout << "Target found in the array." << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}