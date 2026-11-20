#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void pattern13(int n)
    {
        int num = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << num << " ";
                num = num + 1;
            }
            cout << endl;
        }
    }
};

    int main()
    {
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif

        int n;
        cin >> n;
        Solution sl;
        sl.pattern13(n);
        return 0;
    }
