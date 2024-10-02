#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class compareMarks
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks > b.marks)
        {
            return false;
        }
        else if (a.marks == b.marks)
        {
            return a.roll > b.roll;
        }
        else
        {
            return true;
        }
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, compareMarks> pq;

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;

        cin >> name >> roll >> marks;

        pq.push(Student(name, roll, marks));
    }

    int q;
    cin >> q;

    while (q--)
    {
        int commands;
        cin >> commands;

        if (commands == 0)
        {
            string name;
            int roll;
            int marks;

            cin >> name >> roll >> marks;

            pq.push(Student(name, roll, marks));

            Student topStudent = pq.top();
            cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
        }

        if (commands == 1)
        {
            if (!pq.empty())
            {
                Student topStudent = pq.top();
                cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }

        if (commands == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    Student topStudent = pq.top();
                    cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
