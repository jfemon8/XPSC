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

    void dp(vector<int> &c, int t, int idx, vector<int> a)
    {
        if (t == 0)
        {
            ans.push_back(a);
            return;
        }
        int i = idx;
        while (i < c.size() && t >= c[i])
        {
            if (i == idx || c[i] != c[i - 1])
            {
                a.push_back(c[i]);
                dp(c, t - c[i], i + 1, a);
                a.pop_back();
            }
            i++;
        }
    }

    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<int> a;
        sort(candidates.begin(), candidates.end());
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
