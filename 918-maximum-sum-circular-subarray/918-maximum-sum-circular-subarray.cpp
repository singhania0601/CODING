class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
         int total=0,curr_max=0,curr_min=0,max_sum=INT_MIN,min_sum=INT_MAX;
        
        for(int i=0;i<A.size();i++)
        {
            curr_max=max(curr_max+A[i],A[i]);
            max_sum=max(max_sum,curr_max);
            curr_min=min(curr_min+A[i],A[i]);
            min_sum=min(min_sum,curr_min);
            total+=A[i];
        }
        
        return max_sum > 0 ? max(max_sum,total-min_sum) : max_sum;
        
    }
};