#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern5(int n) {
        int i,j;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n-i+1;j++){
                cout<<"*";
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
    sl.pattern5(n);
    return 0;
}
