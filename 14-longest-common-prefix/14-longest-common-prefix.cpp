class Solution {
public:
    string compare(string s1,string s2)
    {
        string w="";
        int n=min(s1.size(),s2.size());
        for(int i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])break;
            else w+=s1[i];
        }
        return w;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string s1=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            s1=compare(s1,strs[i]);
        }
        return s1;
    }
};