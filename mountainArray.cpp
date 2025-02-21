#include <iostream>
#include <vector>

using namespace std;

int peakIndexInMountainArray(const vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < arr[mid + 1]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
}

int binarySearch(const vector<int>& arr, int target, int left, int right, bool ascending, int peak) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (ascending) {
            if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        } else {
            if (arr[mid] < target) {
                right = mid - 1;
            } else {
    int index = binarySearch(arr, target, 0, peak, true, peak);
            }
        }
    }
    return binarySearch(arr, target, peak + 1, arr.size() - 1, false, peak);
}

int findInMountainArray(int target, const vector<int>& arr) {
    int peak = peakIndexInMountainArray(arr);
    int index = binarySearch(arr, target, 0, peak, true, peak);
    if (index != -1) {
        return index;
    }
    return binarySearch(arr, target, peak + 1, arr.size() - 1, false, peak);
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 6, 4, 2};
    int target = 5;
    int index = findInMountainArray(target, arr);
    if (index != -1) {
        cout << "Target found at index: " << index << endl;
    } else {
        cout << "Target not found" << endl;
    }
    return 0;
}