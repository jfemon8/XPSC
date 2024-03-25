#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    list<ll> mn, mx;
    ll ans = 0, l = 0;

    for (int r = 0; r < n; r++)
    {
        while (!mn.empty() && a[mn.back()] > a[r])
        {
            mn.pop_back();
        }
        while (!mx.empty() && a[mx.back()] < a[r])
        {
            mx.pop_back();
        }
        mn.push_back(r);
        mx.push_back(r);
        while (a[mx.front()] - a[mn.front()] > k)
        {
            l++;
            while (mx.front() < l)
            {
                mx.pop_front();
            }
            while (mn.front() < l)
            {
                mn.pop_front();
            }
        }
        ans += r - l + 1;
    }
    cout << ans << "\n";

    return 0;
}
