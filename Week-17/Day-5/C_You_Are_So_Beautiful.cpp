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
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> last;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            last[a[i]] = i;
        }
        set<int> st;
        ll ans = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (!st.count(a[i]))
            {
                st.insert(a[i]);
                cnt++;
            }
            if (last[a[i]] == i)
            {
                ans += cnt;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
