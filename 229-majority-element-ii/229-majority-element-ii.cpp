class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
         int majorityCount = ((int) a.size()) / 3;
    unordered_map <int , int> frequency;
        vector<int> ans;
    for(int &i : a)
    {
        
        if(++frequency[i] > majorityCount)
        {
           if(ans.empty() || find(ans.begin(),ans.end(),i) == ans.end() ) 
                ans.push_back(i);
        }
            
            
    }
    return ans;
    }
};