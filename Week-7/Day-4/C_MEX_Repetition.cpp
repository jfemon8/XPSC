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
        ll n, k, val;
        cin >> n >> k;
        val = k % (n + 1);
        vector<ll> a(n), b(n + 1), ans(n, -1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]]++;
        }
        ll rep;
        for (int i = 0; i <= n; i++)
        {
            if (b[i] == 0)
            {
                rep = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            int idx = i + val;
            if (idx < n)
            {
                ans[idx] = a[i];
            }
            else if (idx > n)
            {
                idx -= n + 1;
                ans[idx] = a[i];
            }
        }

        for (ll v : ans)
        {
            if (v == -1)
            {
                cout << rep << " ";
            }
            else
            {
                cout << v << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}
