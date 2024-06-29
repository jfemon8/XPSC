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

    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    string ans = "";

    for (int i = 0; i < n; i++)
    {
        string temp = s[i];
        reverse(temp.begin(), temp.end());
        if (s[i] == temp)
        {
            ans += s[i];
            break;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        string temp = s[i];
        reverse(temp.begin(), temp.end());
        for (int j = i + 1; j < n; j++)
        {
            if (s[j] == temp)
            {
                ans = s[i] + ans + s[j];
                break;
            }
        }
    }

    cout << ans.size() << '\n'
         << ans << '\n';

    return 0;
}
