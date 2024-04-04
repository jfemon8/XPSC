#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = a[n - 1] - a[0];
        for (int i = 1; i < n; i++)
        {
            ans = max(ans, a[i - 1] - a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, a[i] - a[0]);
            ans = max(ans, a[n - 1] - a[i]);
        }
        cout << ans << '\n';
    }

    return 0;
}
