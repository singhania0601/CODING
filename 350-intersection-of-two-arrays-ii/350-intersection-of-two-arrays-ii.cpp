class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            return intersect(nums2, nums1);
        }

        unordered_map<int, int> lookup;
        for (const auto& i : nums1) {
           
            lookup[i] = 1+lookup[i];
            
          
        }

        vector<int> result;
        for (const auto& i : nums2) {
          if (lookup[i] > 0) {
                result.push_back(i);
                --lookup[i];
            }
          
        }

        return result;
    }
};