class Solution {
public:
    string reverseWords(string s) {
        
        s.append(" ");
        int n = s.size();
        int i=0;
        int j=0;
        while(i < n)
        {
            if(isspace(s[i]))
            {
                reverse(s.begin()+j , s.end()-n+i);
          
                j = i+1;

            }
            
            i++;
            
        }
        s.pop_back();
        return s;
    }
};