#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool isequal(int n)
{
    set<int> st;
    while (n != 0)
    {
        if (st.find(n % 10) != st.end())
            return false;
        else
            st.insert(n % 10);
        n /= 10;
    }
    return true;
}

int main()
{

    int n;
    cin >> n;
    for (int i = n + 1;; i++)
    {
        if (isequal(i))
        {
            cout << i << endl;
            break;
        }
    }
}