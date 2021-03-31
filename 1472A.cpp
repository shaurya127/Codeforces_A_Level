#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll w, h, n;
        cin >> w >> h >> n;
        int count = 1;
        // while (w % 2 == 0 && h % 2 == 0)
        // {
        //     count=;
        //     w /= 2;
        // }
        while (h % 2 == 0)
        {
            count = count * 2;
            h /= 2;
        }
        while (w % 2 == 0)
        {
            count = count * 2;
            w /= 2;
        }

        if (count >= n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}