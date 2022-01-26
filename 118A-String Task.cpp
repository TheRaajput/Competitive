#include <bits/stdc++.h>
using namespace std;

string removeVowel(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i')
        {
            s.erase(i, 1);
            i--;
        }
    }
    return s;
}

void solve(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string without_vowel = removeVowel(s);
    string output;
    for (int i = 0; i < without_vowel.length(); i++)
    {
        output += ".";
        output += without_vowel[i];
    }
    cout << output;
}

int main()
{
    string s;
    cin >> s;
    solve(s);
    return 0;
}