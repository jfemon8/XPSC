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
        vector<int> a(10, 0), b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[x % 10]++;
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < min(a[i], 3); j++)
            {
                b.push_back(i);
            }
        }
        bool ans = false;
        for (int i = 0; i < b.size() - 2; i++)
        {
            for (int j = i + 1; j < b.size() - 1; j++)
            {
                for (int k = j + 1; k < b.size(); k++)
                {
                    if ((b[i] + b[j] + b[k]) % 10 == 3)
                    {
                        ans = true;
                        break;
                    }
                }
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
