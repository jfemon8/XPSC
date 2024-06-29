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
        string a, b;
        cin >> a >> b;
        ll ans = a.size() + b.size();

        for (int i = 0; i < b.size(); i++)
        {
            ll idx = i;
            for (int j = 0; j < a.size(); j++)
            {
                if (idx < b.size() && b[idx] == a[j])
                {
                    idx++;
                }
            }
            idx -= i;
            ans = min(ans, a.size() + (b.size() - idx));
        }

        cout << ans << '\n';
    }

    return 0;
}