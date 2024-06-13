#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int pre[n];
    pre[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = arr[i] + pre[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        cout << pre[i] << " ";
    }
    return 0;
}