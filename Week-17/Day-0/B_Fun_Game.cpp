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
        string s, t;
        cin >> n >> s >> t;
        int ps1 = n, ps2 = n;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ps1 = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (t[i] == '1')
            {
                ps2 = i;
                break;
            }
        }
        cout << (ps1 > ps2 ? "NO\n" : "YES\n");
    }

    return 0;
}
