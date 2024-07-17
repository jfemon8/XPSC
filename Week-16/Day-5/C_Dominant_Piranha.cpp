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
        set<int> st;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
            st.insert(a[i]);
        }
        if (st.size() == 1)
        {
            cout << "-1\n";
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == mx)
            {
                if (i > 0 && a[i - 1] < mx)
                {
                    cout << i + 1 << '\n';
                    break;
                }
                else if (i < n - 1 && a[i + 1] < mx)
                {
                    cout << i + 1 << '\n';
                    break;
                }
            }
        }
    }

    return 0;
}
