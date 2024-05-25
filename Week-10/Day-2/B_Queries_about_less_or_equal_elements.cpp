#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    while (m--)
    {
        ll x;
        cin >> x;
        int it = (upper_bound(a.begin(), a.end(), x) - a.begin());
        cout << it << " ";
    }

    return 0;
}
