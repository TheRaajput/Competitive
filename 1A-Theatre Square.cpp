#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n, m, a;
    cin>>n>>m>>a;

    ll length = n/a;
    ll breadth = m/a;

    if(n%a != 0)
    {
        length++;
    }
    if(m%a != 0)
    {
        breadth++;
    }
    cout<<length*breadth;
}