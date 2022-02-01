class Solution {
public:
    bool isAnagram(string s, string t) {
  if (size(s) != size(t)) {
            return false;
        }

        sort(begin(s), end(s));
        sort(begin(t), end(t));
        return s == t;
        
    }
};