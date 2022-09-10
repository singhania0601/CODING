class Solution {
public:
   int maxChunksToSorted(vector<int>& arr) {
        int count = 0, maxi = -1;
        int n = arr.size();
        
        for(int i = 0; i<n; i++){
            maxi = max(maxi, arr[i]);
            
            if(maxi == i){
                count++;
            }
        }
        
        return count;
    }
};