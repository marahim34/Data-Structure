#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string sentence;
        getline(cin, sentence);

        string word;
        stringstream ss(sentence);

        map<string, int> countWord;

        string firstMaxWord;
        int maxCount = 0;

        while (ss >> word)
        {
            countWord[word]++;

            if (countWord[word] > maxCount)
            {
                maxCount = countWord[word];
                firstMaxWord = word;
            }
            // else if (countWord[word] == maxCount && firstMaxWord.empty())
            // {
            //     firstMaxWord = word;
            // }
        }

        cout << firstMaxWord << " " << maxCount << endl;
    }

    return 0;
}
