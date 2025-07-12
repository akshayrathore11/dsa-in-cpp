#include <iostream>

using namespace std;

long long int reverseNumber(long long int n) {
    long long int revNum = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n = n / 10;
    }
    return revNum;
}

int main() {
    long long int num;
    cout << "Enter a number: ";
    cin >> num;

    long long int reversed = reverseNumber(num);
    cout << "Reversed number: " << reversed << endl;

    return 0;
}
