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
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll idx = -1, mn = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (mn > a[i])
            {
                mn = a[i];
                idx = i;
            }
        }
        bool ans = true;
        ll cnt = 0;
        stack<ll> st;
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && st.top() > a[i])
            {
                cnt++;
                st.pop();
            }
            st.push(a[i]);
        }
        for (int i = idx + 1; i < n; i++)
        {
            if (a[i - 1] > a[i])
            {
                ans = false;
                break;
            }
        }
        if (ans)
        {
            cout << cnt << '\n';
        }
        else
        {
            cout << "-1\n";
        }
    }

    return 0;
}
