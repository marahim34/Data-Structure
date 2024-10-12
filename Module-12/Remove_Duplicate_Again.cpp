#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> myList;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }

        myList.push_back(val);
    }

    myList.sort();

    myList.unique();

    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
