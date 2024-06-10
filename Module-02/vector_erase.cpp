#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    v.erase(v.begin() + 3);

    v.erase(v.begin() + 1, v.begin() + 2);

    for (int a : v)
    {
        cout << a << " ";
    }
    return 0;
}