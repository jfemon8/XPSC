#include <bits/stdc++.h>
#define ll long long
using namespace std;
int k, n;
vector<ll> a;

bool groups(ll c)
{
    ll stu = 0;
    for (int i = 0; i < n; i++)
    {
        stu += (a[i] > c ? c : a[i]);
    }
    return (stu / c) >= k;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> k >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll l = 0, r = 25 * 1e9 + 10;
    while (r > l + 1)
    {
        ll m = (l + r) / 2;
        if (groups(m))
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }
    cout << l;

    return 0;
}
