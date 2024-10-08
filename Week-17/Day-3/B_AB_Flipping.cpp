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
        string s;
        cin >> n >> s;
        ll ans = 0, A = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                A++;
            }
            else if (A > 0)
            {
                ans += A;
                A = 1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}