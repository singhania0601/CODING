class Solution {
public:
    void reverseString(vector<char>& s) {
        
       // SECOND APPROACH
        int st = 0,e = s.size()-1;
        while( st <= e)
        {
            swap(s[st++],s[e--]);
            
        }
        
    }
};