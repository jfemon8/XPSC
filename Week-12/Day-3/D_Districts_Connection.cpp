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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        auto it1 = max_element(a.begin(), a.end());
        auto it2 = min_element(a.begin(), a.end());

        if (*it1 == *it2)
        {
            cout << "NO\n";
            continue;
        }

        int maxi = it1 - a.begin();
        int mini = it2 - a.begin();

        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            if (i == maxi)
            {
                continue;
            }
            cout << i + 1 << " ";
            if (a[i] == a[maxi])
            {
                cout << mini + 1 << '\n';
            }
            else
            {
                cout << maxi + 1 << '\n';
            }
        }
    }

    return 0;
}
