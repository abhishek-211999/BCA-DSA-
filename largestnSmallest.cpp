#include <iostream>
#include <climits>

using namespace std;

void findLargestAndSmallest(int arr[], int size, int &largest, int &smallest) {
    largest = INT_MIN;
    smallest = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
}

int main() {
    int arr[] = {3, 5, 7, 2, 8, -1, 4, 10, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest, smallest;

    findLargestAndSmallest(arr, size, largest, smallest);

    cout << "Largest element: " << largest << endl;
    cout << "Smallest element: " << smallest << endl;

    return 0;
}