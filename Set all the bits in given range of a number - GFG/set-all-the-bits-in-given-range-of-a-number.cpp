// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int setAllRangeBits(int n , int l , int r) {
        // code here
         int range = (((1 << (l - 1)) - 1) ^   
                ((1 << (r)) - 1));
 
    return (n | range);
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
        cout << ob.setAllRangeBits(N,L,R) << endl;
    }
    return 0;
}  // } Driver Code Ends