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
    vector<vector<string>> ans;
    vector<string> a;
    vector<vector<string>> partition(string s)
    {
        int n = s.size();
        fn(0, n, s);
        return ans;
    }
    void fn(int idx, int n, string s)
    {
        if (idx == n)
        {
            ans.push_back(a);
            return;
        }
        for (int i = idx; i < n; i++)
        {
            string str = s.substr(idx, i - idx + 1);
            if (valid(str))
            {
                a.push_back(str);
                fn(i + 1, n, s);
                a.pop_back();
            }
        }
    }
    bool valid(string str)
    {
        int l = 0, r = str.size() - 1;
        while (l < r)
        {
            if (str[l++] != str[r--])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
