class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int res = 0;
        int left = 0;
        unordered_set<char> visited;

        for(int i = 0; i < s.size(); ++i){
            while(visited.count(s[i]) > 0){
                visited.erase(s[left++]);
            }
          

            visited.insert(s[i]);
            res = max(res, i - left + 1);
        }

        return res;
    }
};