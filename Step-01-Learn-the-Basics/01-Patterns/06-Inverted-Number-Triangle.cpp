#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern6(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i+1;j++){
                cout<<j;
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
    sl.pattern6(n);
    return 0;
}
