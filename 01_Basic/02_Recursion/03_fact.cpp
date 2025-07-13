#include <bits/stdc++.h>
using namespace std;

void factParameterised(int n, int fact)
{

    if (n == 1 || n == 0)
    {
        cout << "Parameterised : " << fact;
        return;
    }
    factParameterised(n - 1, fact * n);
}

int factFun(int n)
{

    if (n == 1 || n == 0)
        return 1;

    return n * factFun(n - 1);
}

int main()
{

    cout << "Enter Num : ";
    int n, fact = 1;
    cin >> n;

    factParameterised(n, fact);
    cout << endl;
    cout << "Functional : " << factFun(n);

    cout << endl;
    return 0;
}