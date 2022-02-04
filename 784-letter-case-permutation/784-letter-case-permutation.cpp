class Solution {
public:
 vector<string> letterCasePermutation(string S) {        
        vector<string> res;
        permutations(S, S.size()-1, res);
        
        return res;
    }
    
    void permutations(string S, int start, vector<string> &res) {
        res.push_back(S);
        for (int i=start; i>=0; i--) {
            if (!isalpha(S[i])) continue;
            S[i] = S[i] >= 'a' && S[i]<='z' ? S[i] - 32 : S[i]+32;
            permutations(S, i-1, res);
            S[i] = S[i] >= 'a' && S[i]<='z'  ? S[i] - 32 : S[i]+32;
        }
    }
};