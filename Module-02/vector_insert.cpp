#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2 = {101, 101, 103};

    v.insert(v.begin() + 2, 10);
    v.insert(v.begin() + 2, v2.begin(), v2.end());

    for (int a : v)
    {
        cout << a << " ";
    }

    return 0;
}