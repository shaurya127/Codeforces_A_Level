#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll sumDigits(ll n)
{
    ll sum = 0;

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        while (true)
        {
            int x = sumDigits(n);
            if (gcd(n, x) > 1)
            {
                cout << n << endl;
                break;
            }
            n++;
        }
    }
}