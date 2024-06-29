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

    string s, t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    int cnt = 0, i = n - 1, j = m - 1;
    while (i >= 0 && j >= 0)
    {
        if (s[i] == t[j])
        {
            cnt++;
            i--;
            j--;
        }
        else
        {
            break;
        }
    }
    cout << (n - cnt) + (m - cnt);

    return 0;
}
