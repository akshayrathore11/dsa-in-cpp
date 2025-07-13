#include <bits/stdc++.h>
using namespace std;

void sumParameterised(int n, int sum)
{

    if (n < 1)
    {
        cout << "Parameterised : " << sum;
        return;
    }
    sumParameterised(n - 1, sum + n);
}

int sumFun(int n)
{

    if (n == 0)
        return 0;

    return n + sumFun(n - 1);
}

int main()
{

    cout << "Enter Num : ";
    int n, sum = 0;
    cin >> n;

    sumParameterised(n, sum);
    cout << endl;
    cout << "Functional : " << sumFun(n);

    cout << endl;
    return 0;
}