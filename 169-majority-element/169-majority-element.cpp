class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> hmap; 
        for(int i=0;i<nums.size();i++)
        {
            hmap[nums[i]]++;
        }
        
        int cMax = 0;
        int max = 0;
        
        for(auto c: hmap)
        {
            if(c.second > cMax)
            {
                cMax = c.second;
                max = c.first;
            }
        }
        
        return max;
        
    }
};