#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int totaltime = 240;
    int remtime = totaltime - k;
    int count = 0;
    int i = 1;
    while (remtime > 0 && i <= n)
    {
        int x = 5 * i;
        remtime -= x;
        i++;
        if (remtime >= 0)
        {
            count++;
        }
    }

    cout << count;
}