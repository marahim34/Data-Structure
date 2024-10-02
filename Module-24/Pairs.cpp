#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int serial;

    Person(string name, int serial)
    {
        this->name = name;
        this->serial = serial;
    }
};

bool compare(Person a, Person b)
{
    if (a.name == b.name)
    {
        return a.serial > b.serial;
    }
    else
    {
        return a.name < b.name;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<Person> pv;

    for (int i = 0; i < n; i++)
    {
        string name;
        int serial;
        cin >> name >> serial;

        pv.push_back(Person(name, serial));
    }

    sort(pv.begin(), pv.end(), compare);

    for (int i = 0; i < n; i++)
    {
        cout << pv[i].name << " " << pv[i].serial << endl;
    }

    return 0;
}
