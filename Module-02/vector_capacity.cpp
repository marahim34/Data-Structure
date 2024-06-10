#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    cout << v.max_size() << endl;
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
    v.push_back(20);
    cout << v.capacity() << endl;
    // Push_back capacity ke double kore fele
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    cout << v.capacity() << endl;

    cout << v.size() << endl;

    v.resize(3);
    v.resize(7, 60);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    // v.clear(); // It only clears the value, but still you can access the memory
    // cout << v.size() << endl;
    // cout << v[2] << endl;

    return 0;
}