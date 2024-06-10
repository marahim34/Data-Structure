#include <bits/stdc++.h>
using namespace std;

int main()
{
    // O(1) When the vector input is one
    vector<int> v;
    cout << v.size() << endl;

    // O(N) When you have n items and it will give garbage value of zero for ach of the the items
    // vector<int> vn(5); With this version we are not giving any specific number to the items of array, but the next one will assign value at each of the items of the array

    vector<int> vn(5);
    cout << vn.size() << endl;

    for (int i = 0; i < vn.size(); i++)
    {
        cout << vn[i] << " ";
    }
    cout << endl;

    // O(N)
    vector<int> vn1(5, 10);
    cout << vn1.size() << endl;

    for (int i = 0; i < vn1.size(); i++)
    {
        cout << vn1[i] << " ";
    }
    cout << endl;

    // Type 4
    vector<int> vn2(5, 5);
    vector<int> vn3(vn2);

    for (int i = 0; i < vn2.size(); i++)
    {
        cout << vn2[i] << " ";
    }
    cout << endl;

    int ar[6] = {1, 2, 3, 4, 5, 6};

    vector<int> vo(ar, ar + 6);
    for (int i = 0; i < vo.size(); i++)
    {
        cout << vo[i] << " ";
    }
    cout << endl;

    return 0;
}