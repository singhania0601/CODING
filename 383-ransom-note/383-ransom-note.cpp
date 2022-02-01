class Solution {
public:
    bool canConstruct(string rn, string magazine) {
 
        unordered_map<char,int> m;
        for(int i=0;i<magazine.size();i++)
        {
            m[magazine[i]]++;
        }
        
        for(int i=0;i<rn.size();i++)
        {
            if(--m[rn[i]] < 0 ) return false;
        }
        
        return true;
        
    }
};