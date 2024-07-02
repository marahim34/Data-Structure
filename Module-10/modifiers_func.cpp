#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 50};

    list<int> newList;
    // newList = myList;

    // newList.assign(myList.begin(), myList.end());

    myList.push_back(100);
    myList.pop_back();
    myList.pop_back();
    myList.pop_front();
    myList.push_front(0);

    // myList.insert(myList.begin(), 100);
    myList.insert(next(myList.begin(), 2), 100);
    myList.insert(next(myList.begin(), 3), {200, 300, 400});

    myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));

    for (int val : myList)
    {
        cout << val << " ";
    }

    cout << endl;

    return 0;
}