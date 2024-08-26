#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        v.push_back(x);

        int cur_ind = v.size() - 1;
        // cout << cur_ind << endl;

        // cout << parent << endl;

        while (cur_ind != 0)
        {
            int parent = (cur_ind - 1) / 2;
            if (v[parent] < v[cur_ind])
                swap(v[parent], v[cur_ind]);
            else
                break;

            cur_ind = parent;
        }
    }

    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}