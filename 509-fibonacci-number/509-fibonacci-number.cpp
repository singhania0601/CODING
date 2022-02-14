class Solution {
public:
    int fib(int N) {
      vector<int> memo(N+1,0);
        if(N == 0) return 0;
        if(N == 1) return 1;
        memo[0] = 0;
        memo[1] = 1;
        for(int i = 2; i < N+1; i++){
            memo[i] = memo[i-1]+memo[i-2];
        }
        return memo[N];
        
    }
};