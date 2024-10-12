#include <bits/stdc++.h>
using namespace std;

void print_list(list<int> &my_list)
{

    cout << "L ->";
    for (auto left_it = my_list.begin(); left_it != my_list.end(); left_it++)
    {
        cout << " " << *left_it;
    }
    cout << endl;

    cout << "R ->";
    for (auto right_it = my_list.rbegin(); right_it != my_list.rend(); right_it++)
    {
        cout << " " << *right_it;
    }
    cout << endl;
}

int main()
{
    int q;
    cin >> q;
    list<int> linked_list;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            linked_list.push_front(v);
        }
        else if (x == 1)
        {
            linked_list.push_back(v);
        }
        else if (x == 2)
        {
            if (v >= 0 && v < linked_list.size())
            {
                auto it = linked_list.begin();
                advance(it, v);
                linked_list.erase(it);
            }
        }

        print_list(linked_list);
    }

    return 0;
}
