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
        ll n, c;
        cin >> n >> c;
        vector<ll> a(n), p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            p[i] = a[i] + i + 1;
        }
        sort(p.begin(), p.end());
        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            if (p[i] <= c)
            {
                count++;
                c -= p[i];
            }
            else
            {
                break;
            }
        }
        cout << count << '\n';
    }

    return 0;
}
