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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll count = 0, cnt = n;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[0])
            {
                count++;
            }
            else
            {
                cnt = min(cnt, count);
                count = 0;
            }
        }
        cnt = min(cnt, count);
        if (cnt == n)
        {
            cout << "-1\n";
        }
        else
        {
            cout << cnt << '\n';
        }
    }

    return 0;
}
