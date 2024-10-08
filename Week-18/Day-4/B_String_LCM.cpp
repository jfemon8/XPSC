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
        string s, tt;
        cin >> s >> tt;
        int n = s.size(), m = tt.size();
        int LCM = (n * m) / __gcd(n, m);

        string ss = "", ttt = "";
        for (int i = 0; i < LCM / n; i++)
        {
            ss += s;
        }
        for (int i = 0; i < LCM / m; i++)
        {
            ttt += tt;
        }

        if (ss == ttt)
        {
            cout << ss << '\n';
        }
        else
        {
            cout << "-1\n";
        }
    }

    return 0;
}
