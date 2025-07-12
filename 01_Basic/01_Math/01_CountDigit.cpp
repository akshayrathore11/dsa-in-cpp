#include <iostream>
#include <cmath>  // for log10

using namespace std;

int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    // Edge case for 0
    if (n == 0) {
        cout << "Number of Digits: 1 (Special case for 0)" << endl;
        return 0;
    }

    // ✅ Brute Force
    int bruteCount = 0;
    int temp = n;
    while (temp > 0) {
        bruteCount++;
        temp = temp / 10;
    }
    cout << "Brute Force - Number of Digits: " << bruteCount << endl;

    // ✅ Optimal
    int optimalCount = (int)log10(n) + 1;
    cout << "Optimal - Number of Digits: " << optimalCount << endl;

    return 0;
}
