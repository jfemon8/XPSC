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
        priority_queue<ll> pq;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x == 0 && !pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
            else if (x != 0)
            {
                pq.push(x);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
