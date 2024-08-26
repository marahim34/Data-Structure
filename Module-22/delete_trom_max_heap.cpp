#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int x)
{
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

void delete_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();

    int cur = 0;

    while (true)
    {
        int left_index = cur * 2 + 1;
        int right_index = cur * 2 + 2;

        int last_index = v.size() - 1;

        if (left_index <= last_index && right_index <= last_index)
        {
            // both values are present
            if (v[left_index] >= v[right_index] && v[left_index > v[cur]])
            {
                swap(v[left_index], v[cur]);
                cur = left_index;
            }
            else if (v[right_index] >= v[left_index] && v[right_index] > v[cur])
            {
                swap(v[right_index], v[cur]);
                cur = right_index;
            }
            else
            {
                break;
            }
        }
        else if (left_index <= last_index)
        {
            // only the left index available
            if (v[left_index] > v[cur])
            {
                swap(v[left_index], v[cur]);
                cur = left_index;
            }
            else
            {
                break;
            }
        }
        else if (right_index <= last_index)
        {
            // only the right index available
            if (v[right_index] > v[cur])
            {
                swap(v[right_index], v[cur]);
                cur = right_index;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

void print_heap(vector<int> v)
{
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }

    delete_heap(v);

    print_heap(v);

    return 0;
}