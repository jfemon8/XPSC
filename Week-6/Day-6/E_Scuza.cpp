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
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n), mx(n), pref(n);
        cin >> a[0];
        mx[0] = a[0];
        pref[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            mx[i] = max(mx[i - 1], a[i]);
            pref[i] = pref[i - 1] + a[i];
        }
        while (q--)
        {
            ll x;
            cin >> x;
            ll l = -1, r = n;
            while (r > l + 1)
            {
                ll mid = (l + r) / 2;
                if (mx[mid] <= x)
                {
                    l = mid;
                }
                else
                {
                    r = mid;
                }
            }
            if (l < 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << pref[l] << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}
