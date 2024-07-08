#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

class Solution
{
public:
    vector<vector<int>> ans;
    map<vector<int>, int> mp;
    void dp(vector<int> &c, int t, int idx, vector<int> a)
    {
        if (idx == c.size())
        {
            return;
        }
        if (t == 0)
        {
            ans.push_back(a);
            return;
        }
        dp(c, t, idx + 1, a);
        if (c[idx] <= t)
        {
            t -= c[idx];
            a.push_back(c[idx]);
            dp(c, t, idx, a);
            a.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<int> a;
        dp(candidates, target, 0, a);
        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
