#include <iostream>
#include <cmath>
using namespace std;

int countFactors(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            if (i == n / i) {
                ++count; // Perfect square
            } else {
                count += 2; // Pair of factors
            }
        }
    }
    return count;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int factors = countFactors(number);
    cout << "Number of factors of " << number << " is: " << factors << endl;

    return 0;
}