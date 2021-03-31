#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long arr[20][20];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
            }
        }
    }
    int maxele = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (arr[i][j] > maxele)
            {
                maxele = arr[i][j];
            }
        }
    }
    cout << maxele << endl;
}