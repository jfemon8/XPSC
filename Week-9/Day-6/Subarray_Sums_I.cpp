#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x, cnt = 0;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0, l = 0, r = 0;
    while (r < n)
    {
        sum += a[r];
        while (sum > x)
        {
            sum -= a[l++];
        }
        if (sum == x)
        {
            cnt++;
        }
        r++;
    }
    cout << cnt;

    return 0;
}
