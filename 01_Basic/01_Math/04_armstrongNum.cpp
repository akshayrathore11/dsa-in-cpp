#include <iostream>
#include <cmath>  // For pow()

using namespace std;

bool isArmstrong(int num) {
    int original = num;
    int digits = 0;
    int temp = num;

    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    int sum = 0;
    temp = num;

    // Calculate sum of powered digits
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is NOT an Armstrong number." << endl;
    }

    return 0;
}
