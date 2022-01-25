#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, count = 0, number;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    number = arr[k-1];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= number && arr[i]>0)
        {
            count++;
        }
    }
    cout << count;
}