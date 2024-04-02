#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, ans = 0;
        cin >> n;
        vector<ll> a(n), b(n), c(n);
        vector<pair<ll, ll>> d(n), e(n), f(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            d.push_back({a[i], i});
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            e.push_back({b[i], i});
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            f.push_back({c[i], i});
        }
        sort(e.rbegin(), e.rend());
        sort(f.rbegin(), f.rend());
        sort(d.rbegin(), d.rend());

        for (int i = 0; i < 3; i++)
        {
            ll sum = d[i].first;
            for (int j = 0; j < 3; j++)
            {
                if (e[j].second != d[i].second)
                {
                    sum += e[j].first;
                    for (int k = 0; k < 3; k++)
                    {
                        if (f[k].second != e[j].second && f[k].second != d[i].second)
                        {
                            sum += f[k].first;
                            ans = max(ans, sum);
                            sum -= f[k].first;
                        }
                    }
                    sum -= e[j].first;
                }
            }
            sum -= d[i].first;
        }

        cout << ans << "\n";
    }

    return 0;
}
