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

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        ll ans = 0;
        multiset<ll> st;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans += a[i] / k;
            if (a[i] % k != 0)
            {
                st.insert(a[i] % k);
            }
        }

        while (!st.empty())
        {
            auto it = st.begin();
            ll val = *it;
            st.erase(it);
            ll need = k - val;
            auto i = st.lower_bound(need);
            if (i != st.end())
            {
                ans++;
                st.erase(i);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
