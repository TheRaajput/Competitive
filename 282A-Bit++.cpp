#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0;
    cin>>n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s[0] == '+' || s[s.size() - 1] == '+')
        {
            x++;
        }
        else if (s[0] == '-' || s[s.size() - 1] == '-')
        {
            x--;
        }
    }
    cout << x << "\n";
    return 0;
}