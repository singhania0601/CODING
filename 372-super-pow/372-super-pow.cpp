class Solution {
public:
    int superPow(int a, vector<int>& b) {
        int bmod = 0;
        for(auto val: b)
        {
            bmod = (bmod*10 + val)%1140;
            
        }
        return binaryExpo(a,bmod,1337);
    }
    
    int binaryExpo(int a, int b, int M)
    {
        a = a%M;
        int ans = 1;
        while(b > 0)
        {
            if(b&1)
            {
                ans = (ans*1LL*a)%M;
            }
            
            a = (a*1LL*a)%M;
            b >>=1;
        }
        
        return ans;
    }
};