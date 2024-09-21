#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    if (n % 2 == 0)
    {
        unordered_map<char, int> d1, d2;
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                d1[a[i]]++;
            }
            else
            {
                d2[a[i]]++;
            }
        }

        int mxcnt = 0, mncnt = 0;
        for (auto &p : d2)
        {
            mxcnt = max(mxcnt, p.second);
        }
        for (auto &p : d1)
        {
            mncnt = max(mncnt, p.second);
        }

        int result = n - mncnt - mxcnt;
        cout << result << endl;
    }
    else
    {
        unordered_map<char, int> ev, od;
        for (int i = 0; i < n - 1; ++i)
        {
            if (i % 2 == 0)
            {
                ev[a[i]]++;
            }
            else
            {
                od[a[i]]++;
            }
        }

        unordered_map<char, int> ev2, od2;
        int emx = 0, omx = 0;
        for (auto &p : ev)
        {
            emx = max(emx, p.second);
        }
        for (auto &p : od)
        {
            omx = max(omx, p.second);
        }

        int ans = n - omx - emx;

        for (int i = n - 2; i >= 0; --i)
        {
            if (i % 2 == 0)
            {
                ev[a[i]]--;
                ev2[a[i + 1]]++;
            }
            else
            {
                od[a[i]]--;
                od2[a[i + 1]]++;
            }

            unordered_map<char, int> combined_ev = ev;
            for (auto &p : ev2)
            {
                combined_ev[p.first] += p.second;
            }

            unordered_map<char, int> combined_od = od;
            for (auto &p : od2)
            {
                combined_od[p.first] += p.second;
            }

            int em = 0, om = 0;
            for (auto &p : combined_ev)
            {
                em = max(em, p.second);
            }
            for (auto &p : combined_od)
            {
                om = max(om, p.second);
            }

            ans = min(ans, n - em - om);
        }

        cout << ans << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
