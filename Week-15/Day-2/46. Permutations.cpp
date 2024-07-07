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
    void fn(vector<int> &nums, vector<vector<int>> &ans, vector<int> &a, int freq[])
    {
        if (a.size() == nums.size())
        {
            ans.push_back(a);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (freq[i] == 0)
            {
                a.push_back(nums[i]);
                freq[i] = 1;
                fn(nums, ans, a, freq);
                a.pop_back();
                freq[i] = 0;
            }
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> a;
        int freq[nums.size()];
        for (int i = 0; i < nums.size(); i++)
        {
            freq[i] = 0;
        }
        fn(nums, ans, a, freq);
        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
