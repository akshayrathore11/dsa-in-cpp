#include <iostream>
using namespace std;

// Function to check if a number is a palindrome
bool palindrome(int n) {
    int duplicate = n;
    int revNum = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n = n / 10;
    }

    if (duplicate == revNum) return true;
    else return false;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (palindrome(num)) {
        cout << num << " is a Palindrome." << endl;
    } else {
        cout << num << " is NOT a Palindrome." << endl;
    }

    return 0;
}
