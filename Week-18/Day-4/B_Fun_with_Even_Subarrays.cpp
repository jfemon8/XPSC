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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int op = 0, cnt = 0, val = a[n], idx = n;
        while (idx > 0)
        {
            if (a[idx] == val)
            {
                cnt++;
                idx--;
            }
            else
            {
                op++;
                idx -= cnt;
                cnt *= 2;
            }
        }
        cout << op << '\n';
    }

    return 0;
}
