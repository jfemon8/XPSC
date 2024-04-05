#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        a[0] = 1;
        a[1] = 3;
        a[2] = 2;
        for (int i = 3; i < n; i++)
        {
            a[i] = i + 1;
            if (a[i] == (a[i - 1] | a[i - 2]))
            {
                swap(a[i], a[i - 1]);
            }
        }
        for (int val : a)
        {
            cout << val << " ";
        }
        cout << '\n';
    }
}
