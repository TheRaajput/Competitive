#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6][6];
    int x, y, value;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> value;
            arr[i][j] = value;
            if (value == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    cout<<abs(x-3)+abs(y-3);
    return 0;
}