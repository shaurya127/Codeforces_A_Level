#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max_so_far = arr[0];
    int min_so_far = arr[0];
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max_so_far)
        {
            max_so_far = arr[i];
            count++;
        }
        else if (arr[i] < min_so_far)
        {
            min_so_far = arr[i];
            count++;
        }
    }
    cout << count << endl;
}