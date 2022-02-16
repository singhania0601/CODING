class Solution {
public:
    vector<int> getRow(int rowIndex) {
           vector<int> res(rowIndex+1, 1);
        for(int i=2; i<rowIndex+1; i++){
            for(int k=i-1; k>0; k--) res[k] += res[k-1];
        }
        
        return res;
        
    }
};