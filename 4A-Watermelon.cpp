#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{
    if(n>2 && n%2==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}

int main()
{
    int n;
    cin>>n;
    solve(n);
    return 0;
}