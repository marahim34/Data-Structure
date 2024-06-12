#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;

    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long pre[n];
    pre[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = arr[i] + pre[i - 1];
    }

    // for (int i = 1; i < n; i++)
    // {
    //     cout << pre[i] << endl;
    // }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int sum = 0;

        if (l == 0)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l - 1];
        }

        // for (int i = l; i <= r; i++)
        // {
        //     sum += arr[i];
        // }
        cout << sum << endl;
    }

    return 0;
}