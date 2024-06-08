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
        vector<vector<int>> v(n);
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            v[i].resize(k);
            for (int j = 0; j < k; j++)
            {
                cin >> v[i][j];
                st.insert(v[i][j]);
            }
        }
        int ans = 0;
        for (int val : st)
        {
            set<int> st2;
            for (auto vec : v)
            {
                bool found = false;
                for (int x : vec)
                {
                    if (x == val)
                    {
                        found = true;
                    }
                }
                if (!found)
                {
                    for (int x : vec)
                    {
                        st2.insert(x);
                    }
                }
            }
            ans = max(ans, (int)st2.size());
        }
        cout << ans << '\n';
    }

    return 0;
}
