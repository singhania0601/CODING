class Solution {
public:
    int findDuplicate(vector<int>& nums) {
   unordered_set<int> cache;
        for (int i = 0; i < nums.size(); i++) {
            if (cache.count(nums[i])) {
                return nums[i];
            }
            cache.insert(nums[i]);
        }
        return 0;
    }
};