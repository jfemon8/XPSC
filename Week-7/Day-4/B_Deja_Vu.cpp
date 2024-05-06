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
        vector<ll> a(n), b(31, 0), v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++)
        {
            ll x;
            cin >> x;
            if (b[x] == 0)
            {
                v.push_back(x);
                b[x]++;
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            ll val = pow(2, v[i]);
            for (int j = 0; j < n; j++)
            {
                if (a[j] % val == 0)
                {
                    a[j] += val / 2;
                }
            }
        }
        for (ll c : a)
        {
            cout << c << " ";
        }
        cout << '\n';
    }

    return 0;
}
