#include <iostream>
using namespace std;

string check(string word)
{
    if (word.length() <= 10)
        return word;
    else
        return (word[0] + to_string(word.length() - 2) + word[word.length() - 1]);
}

int main()
{
    int n;
    cin >> n;
    string word;
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        string returnedWord = check(word);
        cout << returnedWord << endl;
    }
}