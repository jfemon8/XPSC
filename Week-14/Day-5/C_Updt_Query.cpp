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
        int n, m;
        string s, str;
        cin >> n >> m >> s;
        set<int> ind;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            ind.insert(x);
        }
        cin >> str;

        sort(str.begin(), str.end());
        int i = 0;
        for (int val : ind)
        {
            if (i < m)
            {
                s[val - 1] = str[i];
                i++;
            }
            else
            {
                break;
            }
        }
        cout << s << '\n';
    }

    return 0;
}
