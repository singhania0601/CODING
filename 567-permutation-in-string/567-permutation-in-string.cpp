class Solution {
public:
    bool checkInclusion(string s1, string s2) {
             unordered_map<char,int> store;
        
        for(int i=0;i<s1.size();i++)
            store[s1[i]]++;
        
        int start=0,end=0;
        
        int len=s1.size();
        int count=0;
        
        while(end<s2.size())
        {
            if(store[s2[end]]!=0)
            {
                store[s2[end]]--;
                count++;
                end++;
      
            }
            else
            {
                store[s2[start]]++;
                count--;
                start++;
         
            }
            
            if(count==len)
                return true;
        }
        
        return false; 
    }
};