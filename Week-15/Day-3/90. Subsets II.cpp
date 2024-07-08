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
    vector<int> a;

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        fn(nums, n, 0);
        return ans;
    }
    void fn(vector<int> &nums, int n, int idx)
    {
        ans.push_back(a);
        for (int i = idx; i < n; i++)
        {
            if (i == idx || nums[i] != nums[i - 1])
            {
                a.push_back(nums[i]);
                fn(nums, n, i + 1);
                a.pop_back();
            }
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
