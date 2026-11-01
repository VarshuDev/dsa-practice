#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern4(int n) {
        for(int i=1;i<=n;i++)
        {
            for (int j=1;j<=i;j++)
            {
                cout<<i;
            }
            cout<<endl;
        }

    }
};

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin>>n;
    Solution sl;
    sl.pattern4(n);
    return 0;
}
