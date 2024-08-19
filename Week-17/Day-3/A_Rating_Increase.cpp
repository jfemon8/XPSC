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
        string s;
        cin >> s;
        int b = 0, i = 1;
        int a = s[0] - '0';
        while (s[i] == '0')
        {
            a = a * 10 + s[i] - '0';
            i++;
        }
        while (i < s.size())
        {
            b = b * 10 + s[i] - '0';
            i++;
        }
        if (a < b)
        {
            cout << a << " " << b << '\n';
        }
        else
        {
            cout << "-1\n";
        }
    }

    return 0;
}
