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
        ll n, m, k;
        cin >> n >> m >> k;
        string s, str = "";
        cin >> s;
        ll cnt = 1;
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'C' || s[i] == 'W')
            {
                cnt++;
            }
            else
            {
                int temp = i - 1;
                while (cnt > m && s[temp] == 'W' && k >= 0)
                {
                    temp--;
                    k--;
                    cnt--;
                }

                if (cnt > m || k < 0)
                {
                    ans = false;
                    break;
                }
                else
                {
                    cnt = 1;
                }
            }
        }

        int temp = n - 1;
        while (cnt > m && s[temp] == 'W' && k >= 0)
        {
            temp--;
            k--;
            cnt--;
        }
        if (cnt > m || k < 0)
        {
            ans = false;
        }

        if (ans)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}