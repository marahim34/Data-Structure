#include <bits/stdc++.h>
using namespace std;

void fun(int *p)
{
    cout << &p << endl;
    cout << *p << endl;
    // p = NULL;
    // *p = 20;
}

int main()
{
    int val = 10;
    int *ptr = &val;

    cout << ptr << endl;
    cout << *ptr << endl;
    // cout << val << endl;
    // cout << &val << endl;

    fun(ptr);

    // cout << val << endl;
    // cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}