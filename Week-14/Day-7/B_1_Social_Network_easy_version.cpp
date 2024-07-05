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

    int n, k;
    cin >> n >> k;
    set<ll> st;
    deque<ll> deq;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (st.find(x) == st.end())
        {
            if (deq.size() < k)
            {
                deq.push_back(x);
            }
            else
            {
                ll val = deq.front();
                deq.pop_front();
                deq.push_back(x);
                st.erase(val);
            }
            st.insert(x);
        }
    }
    cout << deq.size() << '\n';
    while (deq.size())
    {
        cout << deq.back() << " ";
        deq.pop_back();
    }

    return 0;
}
