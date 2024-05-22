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
        ll n, k, q, a, d;
        cin >> n >> k >> q;
        vector<ll> v(k + 1), vc(k + 1);
        v[0] = 0;
        vc[0] = 0;
        for (int i = 1; i <= k; i++)
        {
            cin >> v[i];
        }
        for (int i = 1; i <= k; i++)
        {
            cin >> vc[i];
        }
        while (q--)
        {
            cin >> d;
            auto it = upper_bound(v.begin(), v.end(), d);
            it--;
            if (*it == d)
            {
                cout << vc[it - v.begin()] << ' ';
                continue;
            }
            a = it - v.begin();
            ll dd, t, tt;
            dd = v[a + 1] - v[a];
            t = vc[a + 1] - vc[a];
            tt = vc[a] + (d - v[a]) * t / dd;
            cout << tt << ' ';
        }
        cout << '\n';
    }

    return 0;
}
