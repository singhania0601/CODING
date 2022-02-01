class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char,int> hmap;
       for(int i = 0; i < s.length(); i++)
            hmap[s[i]]++;
        for(int i = 0; i < s.length(); i++) {
            
            if(hmap[s[i]] == 1)
                return i;
        }
        return -1;
        
    }
};