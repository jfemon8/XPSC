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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int frst = 0, lst = 0, temp = k, f = a[0], l = a[n - 1];
        for (int i = 0; i < n; i++)
        {
            if (a[i] == f)
            {
                frst++;
                temp--;
            }
            if (temp == 0)
            {
                temp = i;
                break;
            }
        }
        int temp2 = k;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == l)
            {
                lst++;
                temp2--;
            }
            if (temp2 == 0)
            {
                temp2 = i;
                break;
            }
        }
        if (l == f && frst >= k)
        {
            cout << "YES\n";
            continue;
        }
        if (frst >= k && lst >= k && temp < temp2)
        {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }

    return 0;
}