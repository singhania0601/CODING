class Solution {
public:
    int longestSubstring(string s, int k) {
       int n=s.size();
        int sub1=0;
        int sub2=0;
        unordered_map<char,int>mp;
        
        for(auto x:s){
            mp[x]++;// calculating frequency
        }
        for(int i=0;i<n;i++){
            if(mp[s[i]]<k){ 
                sub1=longestSubstring( s.substr(0,i),  k);
                sub2=longestSubstring(s.substr(i+1),  k);
                break;
            }
            if(i==n-1){// if i ==n-1 that means we traverse whole string so we return n
                return n;
            }
        }
        return max(sub1,sub2);// find max from left and right
    }
};