#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;
const ll N = 200005;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> a(N, 0);
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        a[l] += 1;
        a[r + 1] -= 1;
    }
    for (int i = 1; i < N; i++)
    {
        a[i] += a[i - 1];
    }
    vector<ll> cnt(N, 0);
    for (int i = 0; i < N; i++)
    {
        if (a[i] >= k)
        {
            cnt[i] = 1;
        }
    }
    for (int i = 1; i < N; i++)
    {
        cnt[i] += cnt[i - 1];
    }
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        cout << cnt[y] - cnt[x - 1] << '\n';
    }

    return 0;
}
