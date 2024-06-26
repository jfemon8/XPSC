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
        ll n;
        cin >> n;
        bool ans = true;
        vector<ll> a(n);
        priority_queue<ll> pq;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        pq.push(sum);
        sort(a.rbegin(), a.rend());
        int i = 0;
        while (i < n)
        {
            if (pq.top() < a[i])
            {
                ans = false;
                break;
            }
            while (pq.top() > a[i])
            {
                ll temp = pq.top();
                pq.pop();
                pq.push(temp / 2);
                pq.push((temp + 1) / 2);
            }
            while (i < n && pq.top() == a[i])
            {
                pq.pop();
                i++;
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
