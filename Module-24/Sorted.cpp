#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        auto it = unique(a.begin(), a.end());

        a.erase(it, a.end());

        for (int i : a)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}