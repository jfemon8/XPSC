#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

vector<ll> a(262150);
vector<ll> mn(4 * 262150), mx(4 * 262150);

ll cnt;
bool ans;

void build(ll node, ll b, ll e)
{
    if (b == e)
    {
        mx[node] = a[b];
        mn[node] = a[b];
        return;
    }
    ll mid = (b + e) / 2, l = 2 * node, r = (2 * node) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    mx[node] = max(mx[l], mx[r]);
    mn[node] = min(mn[l], mn[r]);

    if (mx[l] < mn[r])
    {
    }
    else if (mx[r] < mn[l])
    {
        cnt++;
    }
    else
    {
        ans = false;
    }
}

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
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        cnt = 0;
        ans = true;
        build(1, 1, n);
        if (!ans)
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
