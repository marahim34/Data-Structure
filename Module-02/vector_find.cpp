#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 2, 3, 4, 5, 6, 2, 2, 7};

    // vector<int>::iterator it;

    auto it = find(v.begin(), v.end(), 2);
    if (it == v.end())
        cout << "Not Found";
    else
        cout << "Found";
    // cout << *it;
    return 0;
}