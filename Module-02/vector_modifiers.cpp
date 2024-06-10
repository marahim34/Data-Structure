#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> x = {10, 20, 30};

    x.pop_back();
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
    vector<int> v = {1, 2, 3};

    v = x; // O(1) [If the size of two arrays are same]
    // O(N) However if the variables are not same than it should be O(N) instead of O(1);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}