#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> a;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push(x);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int commands;
        cin >> commands;

        if (commands == 0)
        {
            int x;
            cin >> x;
            a.push(x);

            cout << a.top() << endl;
        }

        if (commands == 1)
        {
            if (!a.empty())
            {
                cout << a.top() << endl;
            }
            else
                cout << "Empty" << endl;
        }

        if (commands == 2)
        {
            if (!a.empty())
            {
                a.pop();
                if (!a.empty())
                    cout << a.top() << endl;
                else
                    cout << "Empty" << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
