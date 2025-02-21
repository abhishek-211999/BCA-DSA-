#include <iostream>
#include <vector>

using namespace std;

void calculatePrefixSum(const vector<int>& arr, vector<int>& prefixSum) {
    int n = arr.size();
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
}

void calculateSuffixSum(const vector<int>& arr, vector<int>& suffixSum) {
    int n = arr.size();
    suffixSum[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        suffixSum[i] = suffixSum[i + 1] + arr[i];
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    vector<int> prefixSum(n), suffixSum(n);

    calculatePrefixSum(arr, prefixSum);
    calculateSuffixSum(arr, suffixSum);

    cout << "Prefix Sum: ";
    for (int i = 0; i < n; ++i) {
        cout << prefixSum[i] << " ";
    }
    cout << endl;

    cout << "Suffix Sum: ";
    for (int i = 0; i < n; ++i) {
        cout << suffixSum[i] << " ";
    }
    cout << endl;

    return 0;
}