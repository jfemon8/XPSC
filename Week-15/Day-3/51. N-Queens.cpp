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

    vector<vector<string>> solveNQueens(int n)
    {
        vector<string> a(n, string(n, '.'));
        fn(a, 0, n);
        return ans;
    }
    void fn(vector<string> &a, int r, int &n)
    {
        if (r == n)
        {
            ans.push_back(a);
            return;
        }
        for (int c = 0; c < n; c++)
        {
            if (valid(a, r, c, n))
            {
                a[r][c] = 'Q';
                fn(a, r + 1, n);
                a[r][c] = '.';
            }
        }
    }
    bool valid(vector<string> &a, int r, int c, int &n)
    {
        for (int i = 0; i < r; i++)
        {
            if (a[i][c] == 'Q')
            {
                return false;
            }
        }
        for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--)
        {
            if (a[i][j] == 'Q')
            {
                return false;
            }
        }
        for (int i = r - 1, j = c + 1; i >= 0 && j < n; i--, j++)
        {
            if (a[i][j] == 'Q')
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
