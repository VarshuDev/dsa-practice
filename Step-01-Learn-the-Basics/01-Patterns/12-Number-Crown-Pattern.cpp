#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void pattern12(int n) {
        
    
      int spaces = 2*(n-1);
      
     
      for(int i=1;i<=n;i++){
          
          
          for(int j=1;j<=i;j++){
              cout<<j;
          }
          
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }

          for(int j=i;j>=1;j--){
              cout<<j;
          }

          cout<<endl;
          spaces-=2;
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
    sl.pattern12(n);
    return 0;
}
