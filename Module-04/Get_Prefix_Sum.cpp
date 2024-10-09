#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long pre[n];
    pre[0] = a[0];

    for (int i = 1; i <= n; i++)
    {
        pre[i] = a[i] + pre[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << pre[i] << " ";
    }

    return 0;
}