#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    multiset<ll> mini, maxi;
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i >= k)
        {
            if (mini.find(a[i - k]) != mini.end())
            {
                mini.erase(mini.find(a[i - k]));
                sum1 -= a[i - k];
            }
            else
            {
                maxi.erase(maxi.find(a[i - k]));
                sum2 -= a[i - k];
            }
        }

        if (mini.size() <= maxi.size())
        {
            mini.insert(a[i]);
            sum1 += a[i];
        }
        else
        {
            maxi.insert(a[i]);
            sum2 += a[i];
        }

        if (!mini.empty() && !maxi.empty() && (*mini.rbegin() > *maxi.begin()))
        {
            ll temp = *mini.rbegin();
            ll tmp = *maxi.begin();
            sum1 += tmp - temp;
            sum2 += temp - tmp;
            mini.erase(--mini.end());
            maxi.erase(maxi.begin());
            mini.insert(tmp);
            maxi.insert(temp);
        }

        if (i + 1 >= k)
        {
            ll mid = *mini.rbegin();
            ll ans = (mid * mini.size() - sum1) + (sum2 - mid * maxi.size());
            cout << ans << " ";
        }
    }

    return 0;
}
