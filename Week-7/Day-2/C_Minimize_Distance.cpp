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
        int n, k;
        cin >> n >> k;
        vector<ll> a, b;
        ll mx = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x < 0)
            {
                a.push_back(abs(x));
            }
            else
            {
                b.push_back(x);
            }
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        ll ans = 0, cnt = 0;
        for (int i = a.size() - 1; i >= 0; i -= k)
        {
            ans += a[i] * 2;
        }
        for (int i = b.size() - 1; i >= 0; i -= k)
        {
            ans += b[i] * 2;
        }
        if (a.size() > 0)
        {
            mx = max(mx, a.back());
        }
        if (b.size() > 0)
        {
            mx = max(mx, b.back());
        }

        cout << ans - mx << '\n';
    }

    return 0;
}
