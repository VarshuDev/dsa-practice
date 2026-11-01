#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
        void pattern7(int n) {

        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";

            }
            for(int j=0;j<2*i+1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        }
        void pattern8(int n) {
        
        
        for (int i = 0; i < n; i++) {
            
            for(int j = 0; j < i; j++){
                cout << " ";
            }
            
           
            for (int j = 0; j < 2*n-(2*i+1); j++) {
                cout << "*";
            }
           
            cout << endl;
        }
    }
public:
    void pattern9(int n) {
        pattern7(n);
        pattern8(n);

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
    sl.pattern9(n);
    return 0;
}
