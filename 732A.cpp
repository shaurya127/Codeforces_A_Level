// #include <bits/stdc++.h/>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= 10; i++)
    {
        int x = a * i;
        if (x % 10 == 0 || x % 10 == b)
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
