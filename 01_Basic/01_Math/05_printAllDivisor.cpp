#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

// Brute Force Method: O(n)
void printDivisorsBrute(int n) {
    cout << "Brute Force Divisors: ";
    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            cout << i << " ";
    }
    cout << endl;
}

// Optimal Method: O(sqrt(n))
void printAllDivisorsOptimal(int n) {
    vector<int> ls;

    // for (int i = 1; i <= sqrt(n); i++) {
    for (int i = 1; i*i <= n ; i++) {
        if (n % i == 0) {
            ls.push_back(i);
            if (n / i != i) {
                ls.push_back(n / i); 
            }
        }
    }

    sort(ls.begin(), ls.end());

    cout << "Optimal Divisors: ";
    for (auto it : ls)
        cout << it << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    printDivisorsBrute(n);
    printAllDivisorsOptimal(n);

    return 0;
}
