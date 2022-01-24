#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, problems_done = 0;
    cin >> t;
    while (t--)
    {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        if (petya + vasya + tonya >= 2)
        {
            problems_done++;
        }
    }
    cout<<problems_done<<"\n";
}