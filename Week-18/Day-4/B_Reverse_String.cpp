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

    int test;
    cin >> test;
    while (test--)
    {
        string s, t;
        cin >> s >> t;
        vector<int> a;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == t[0])
            {
                a.push_back(i);
            }
        }
        bool ans = false;
        for (int i = 0; i < a.size(); i++)
        {
            vector<pair<int, int>> v;
            int ss = a[i], tt = 0;
            while (ss < s.size() && tt < t.size() && s[ss] == t[tt])
            {
                if (ss - 2 >= 0 && s[ss - 2] == t[tt])
                {
                    v.push_back({ss - 2, tt});
                }
                ss++;
                tt++;
            }
            if (tt == t.size())
            {
                ans = true;
                break;
            }
            ss -= 2;
            while (ss >= 0 && tt < t.size() && s[ss] == t[tt])
            {
                ss--;
                tt++;
            }
            if (tt == t.size())
            {
                ans = true;
                break;
            }
            for (int j = 0; j < v.size(); j++)
            {
                int temp1 = v[j].first, temp2 = v[j].second;
                while (temp1 >= 0 && temp2 < t.size() && s[temp1] == t[temp2])
                {
                    temp1--;
                    temp2++;
                }
                if (temp2 == t.size())
                {
                    ans = true;
                    break;
                }
            }
            if (ans)
            {
                break;
            }
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
