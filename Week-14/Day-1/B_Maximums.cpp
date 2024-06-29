#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<ll> b(n), a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll val = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] > 0)
        {
            val += b[i];
            a[i] = val;
        }
        else
        {
            a[i] = b[i] + val;
        }
    }

    for (ll v : a)
    {
        cout << v << " ";
    }

    return 0;
}
