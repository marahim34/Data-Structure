#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> myList;
    list<int> myList(10, 5);
    list<int> myList2{1, 2, 3, 4, 5};

    // copy
    list<int> newList = myList2;

    cout << myList.front() << endl;
    cout << myList.size() << endl;

    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (int val : newList)
    {
        cout << val << " ";
    }
    return 0;
}