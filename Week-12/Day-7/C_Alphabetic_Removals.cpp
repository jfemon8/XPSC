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

    int n, k;
    string s;
    cin >> n >> k >> s;
    for (char c = 'a'; c <= 'z'; c++)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c and k > 0)
            {
                s[i] = '0';
                k--;
            }
            else if (k <= 0)
            {
                break;
            }
        }
        if (k <= 0)
        {
            break;
        }
    }
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '0')
        {
            ans += s[i];
        }
    }
    cout << ans << '\n';

    return 0;
}
