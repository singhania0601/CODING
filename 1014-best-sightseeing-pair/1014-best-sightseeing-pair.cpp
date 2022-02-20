class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& A) {
        int maxi = A[0]+0;
         int result = -1;
        int n= A.size();
        for (int i=1;i<n;i++)
        {
         result = max(result,maxi+A[i]-i);
           maxi = max(maxi,A[i]+i);
        }
        return result;
    }
};