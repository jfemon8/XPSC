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
        int n;
        cin >> n;
        vector<int> x(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        vector<pair<int, int>> p(n);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            p[i] = {
                x[i],
                a};
        }

        vector<int> frst(n, 0), scnd(n, 0);

        for (int i = 0; i < n - 1; i++)
        {
            if (p[i + 1].first - p[i].first <= p[i].second)
            {
                frst[i] = 1;
            }
        }

        for (int i = n - 1; i > 0; i--)
        {
            if (p[i].first - p[i - 1].first <= p[i].second)
            {
                scnd[i] = 1;
            }
        }

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (frst[i] == 0 && scnd[i] == 0)
            {
                cnt++;
            }
        }

        bool cnd = false;
        int i = 0;
        while (i < n && frst[i])
        {
            i++;
        }
        int j = i;
        i++;
        while (i < n && frst[i])
        {
            i++;
        }
        if (i >= n - 1)
        {
            cnd = true;
        }

        i = n - 1;
        while (i > j && scnd[i])
        {
            i--;
        }
        if (i <= j + 1)
        {
            cnd = true;
        }

        i = n - 1;
        while (i >= 0 && scnd[i])
        {
            i--;
        }
        j = i;
        i--;
        while (i >= 0 && scnd[i])
        {
            i--;
        }
        if (i <= 0)
        {
            cnd = true;
        }

        i = 1, j = n - 2;

        while (j > 0 && frst[j])
        {
            j--;
        }
        while (i < n && scnd[i])
        {
            i++;
        }
        if (i - j >= 1)
        {
            cnd = true;
        }

        if (cnd)
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