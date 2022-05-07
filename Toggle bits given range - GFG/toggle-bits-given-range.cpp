// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int toggleBits(int N , int l , int r) {
        // code here
       int num = ((1 << r) - 1) ^ ((1 << (l - 1)) - 1);
  
        // toggle bits in the range l to r in 'n'
        // and return the number
        // Besides this, we can calculate num as:
        // num=(1<<r)-l .
        return (N ^ num);
      
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,L,R;
        
        cin>>N>>L>>R;

        Solution ob;
        cout << ob.toggleBits(N,L,R) << endl;
    }
    return 0;
}  // } Driver Code Ends