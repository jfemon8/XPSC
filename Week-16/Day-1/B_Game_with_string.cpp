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

    string s;
    cin >> s;
    stack<char> st;
    ll cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (!st.empty() && st.top() == s[i])
        {
            cnt++;
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }

    cout << (cnt % 2 == 1 ? "Yes" : "No");

    return 0;
}
