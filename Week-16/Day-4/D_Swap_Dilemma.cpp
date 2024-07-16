#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

ll parity(vector<ll> &arr)
{
    ll cnt = 0;
    pbds<ll> pst;
    for (int i = 0; i < arr.size(); i++)
    {
        ll val = pst.order_of_key(arr[i] + 1);
        cnt += pst.size() - val;
        pst.insert(arr[i]);
    }
    return cnt;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    set<ll> st1(a.begin(), a.end());
    set<ll> st2(b.begin(), b.end());
    if (st1 != st2)
    {
        cout << "NO\n";
        return;
    }

    if (parity(a) % 2 != parity(b) % 2)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}