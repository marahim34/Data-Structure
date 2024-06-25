#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *pa;

    cout << pa << endl;
    cout << *pa << endl;
    cout << &a << endl;

    pa = &a;
    cout << a << endl;
    cout << *pa << endl;
    cout << pa << endl;
    cout << &a << endl;

    return 0;
}