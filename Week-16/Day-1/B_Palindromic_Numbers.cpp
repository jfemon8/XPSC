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
        vector<int> ans(n), a(n);
        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;
            a[i] = x - '0';
        }
        if (a[0] == 9)
        {
            bool carry = false;
            for (int i = n - 1; i >= 0; i--)
            {
                int val = 1;
                if (carry)
                {
                    a[i]++;
                    carry = false;
                }
                if (val < a[i])
                {
                    val += 10;
                    carry = true;
                }
                ans[i] = val - a[i];
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                ans[i] = 9 - a[i];
            }
        }

        for (int v : ans)
        {
            cout << v;
        }
        cout << '\n';
    }

    return 0;
}
