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
        int n, ans = 0;
        string s;
        cin >> n >> s;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '@')
            {
                ans++;
            }
            else if (s[i] == '*' && s[i - 1] == '*')
            {
                break;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
