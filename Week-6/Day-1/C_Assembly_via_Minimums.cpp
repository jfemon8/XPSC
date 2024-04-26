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
        ll n;
        cin >> n;
        ll m = (n * (n - 1)) / 2;
        vector<ll> a, b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        ll val = n - 1;
        for (int i = 0; i < m; i += val--)
        {
            a.push_back(b[i]);
        }
        a.push_back(b[m - 1]);
        for (ll num : a)
        {
            cout << num << " ";
        }
        cout << '\n';
    }

    return 0;
}
