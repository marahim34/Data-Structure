#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {5, 10, 5, 20, 100, 30, 40, 90, 5, 50, 60, 80, 70};

    myList.remove(5);

    // sort(myList.begin(), myList.end());
    myList.sort();
    myList.sort(greater<int>());

    myList.unique();
    myList.reverse();

    cout << myList.back() << " " << myList.front() << endl;

    cout << *next(myList.begin(), 3) << endl;

    for (int val : myList)
    {
        cout << val << " ";
    }
    return 0;
}