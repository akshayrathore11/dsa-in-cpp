#include <bits/stdc++.h>
using namespace std;

// ❌ Recursive function without base case → Infinite calls → Stack overflow
void withoutBaseCase()
{
    puts("1");
    withoutBaseCase();  // No stopping condition, keeps calling itself
}

// ✅ Recursive function with base case → Stops after 11 calls
void withBaseCase()
{
    static int cnt = 0;
    if (cnt == 11)       // Base case: stop after cnt = 11
        return;
    cout << cnt << endl; // Print current count
    cnt++;               // Increase count
    withBaseCase();      // Recursive call
}

// ✅ Prints "Akshay" from i to n
// Approach: Forward recursion (normal technique)
// TC: O(N), SC: O(N)
void printName(int i, int n)
{
    if (i > n) return;                   // Base case: when i > n, stop
    cout << i << " : " << "Akshay" << endl;  // Print current i
    printName(++i, n);                   // Call next i (i+1)
}

// ✅ Prints "Akshay" from n to i
// Approach: Forward recursion (normal technique)
// TC: O(N), SC: O(N)
void printReverse(int i, int n)
{
    if (n < i) return;                    // Base case: when n < i, stop
    cout << n << " : " << "Akshay" << endl;  // Print current n
    printReverse(i, --n);                // Call with n-1
}

// ✅ Prints "Akshay" from 1 to n using backtracking
// Technique: Backtracking (recursive call first, print later)
// TC: O(N), SC: O(N)
void print_I_N(int i, int n)
{
    if (n < i) return;                      // Base case
    print_I_N(i, n - 1);                     // Go deeper (n-1)
    cout << n << " : Akshay" << endl;      // Print while backtracking
}

// ✅ Prints "Akshay" from n to 1 using backtracking
// Technique: Backtracking (recursive call first, print later)
// TC: O(N), SC: O(N)
void print_N_I(int i, int n)
{
    if (n < i) return;                      // Base case
    print_N_I(i + 1, n);                     // Go deeper (i+1)
    cout << i << " : Akshay" << endl;      // Print while backtracking
}

int main()
{
    // withoutBaseCase();  // Will crash due to infinite recursion
    // withBaseCase();     // Test basic recursion with stopping

    cout << "Enter the N : ";
    int n, i = 1;
    cin >> n;

    // 👇 Print from i to n
    printName(i, n);
    cout << endl;

    // 👇 Print from n to i
    printReverse(i, n);
    cout << endl;

    // 👇 Backtracking: Print from 1 to n
    print_I_N(i, n);
    cout << endl;

    // 👇 Backtracking: Print from n to 1
    print_N_I(i, n);

    cout << endl;
    return 0;
}
