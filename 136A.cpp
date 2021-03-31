
#include <bits/stdc++.h>
#define vi vector<int>
#define int long long int
#define fox(i, n) for (int i = 1; i <= n; i++)
#define fox2(i, n) for (int i = 0; i < n; i++)
#define ff first
#define ss second
#define pb push_back
#define code_faster                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
#define vp vector<pair<int, int>>
#include <map>
#define mod 1000000007
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

void solve()
{

    int n;
    cin >> n;
    vector<pair<int, int>> vect;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        vect.push_back(make_pair(x, i));
    }
    sort(vect.begin(), vect.end());
    // for (int i = 0; i < n; i++)
    // {
    //     // "first" and "second" are used to access
    //     // 1st and 2nd element of pair respectively
    //     cout << vect[i].first << " "
    //          << vect[i].second << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        cout << vect[i].second << " ";
    }
}

signed main()
{
    code_faster int testacse;
    testacse = 1;
    //    cin>>testacse;
    //      while(testacse--){
    solve();
    // }

    return 0;
}
