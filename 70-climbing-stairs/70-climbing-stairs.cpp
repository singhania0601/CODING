class Solution {
public:
    int climbStairs(int n) {
        vector<int> memo(n);
        if(n == 1) return 1;
        if(n == 2 ) return 2;
        if(n == 3) return 3;
        memo[0] = 1;
        memo[1] = 2;
        memo[2] = 3;
        for(int i=3; i<n;i++)
        {
            memo[i] = memo[i-1]+memo[i-2];
        }
        
        return memo[n-1];
    }
};