#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void pattern2(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }

    void pattern5(int n) {
        for (int i = 1; i < n; i++) {
            for (int j = 1; j <= n - i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }

public:
    void pattern10(int n) {
        pattern2(n);
        pattern5(n);
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
    sl.pattern10(n);
    return 0;
}
