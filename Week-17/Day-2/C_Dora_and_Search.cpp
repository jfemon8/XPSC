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
        int mn = 1, mx = n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 0, r = n - 1;
        bool ans = false;
        while (l + 1 < r)
        {
            if (a[l] == mn)
            {
                l++;
                mn++;
            }
            else if (a[l] == mx)
            {
                l++;
                mx--;
            }
            else if (a[r] == mn)
            {
                r--;
                mn++;
            }
            else if (a[r] == mx)
            {
                r--;
                mx--;
            }
            else
            {
                ans = true;
                break;
            }
        }
        if (ans)
        {
            cout << l + 1 << " " << r + 1 << '\n';
        }
        else
        {
            cout << "-1\n";
        }
    }

    return 0;
}
