#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;

    // first way
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int a : v)
    {
        cout << a << " ";
    }

    cout << endl;
    // Second way

    int m;
    cin >> m;
    vector<int> c(m);

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    for (int x : c)
    {
        cout << x << " ";
    }

    return 0;
}