class Solution {
public:
     vector<string> ans;
    string x;
    vector<string> generateParenthesis(int n) {
        solve(n, 0, 0);
        return ans;
    }
    
    void solve(int n, int l_count, int r_count){
        if(r_count > l_count || l_count > n || r_count > n) return;

        if(l_count == r_count && l_count == n){
            ans.push_back(x);
            return;
        }
        x += "(";
        solve(n, l_count+1, r_count);
        x.pop_back();
        
        x += ")";
        solve(n, l_count, r_count+1);
        x.pop_back(); 
    }
};