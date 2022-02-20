class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int k= d.size()-1;
        int carry = 0;
        d[k] = d[k]+1;
        for(int i = d.size()-1; i >= 0;i--)
        {
               
        d[i] = d[i]+carry;
        cout<<d[i]<<endl;          
        if(d[i] <= 9)
        {
            return d;
        }
         
            if(d[i] >= 10)
            {
                carry = 1;
                d[i] = 0;
            
        }

        }
        
        if(carry)
        {
            
         vector<int> di;
         di.push_back(carry);
         for(int i=0;i<d.size();i++)
         {
            di.push_back(d[i]);
         }
            
         return di;
        }
      return d;  
    }
};