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
        int ans = 0, res;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans = ans ^ a[i];
        }
        res = ans;
        for (int i = 0; i < n; i++)
        {
            res = min(res, ans ^ a[i]);
        }
        cout << res << '\n';
    }
}
