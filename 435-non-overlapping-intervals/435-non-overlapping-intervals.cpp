class Solution {
private:
    static bool Comp(const vector<int> & A, const vector<int> & B) {
        if(A[1]==B[1])
            return A[0]<B[0];
        
        return A[1]<B[1];
    }
    
    bool overLaps(const vector<int> & A, const vector<int> & B) {
        if(A[0]<B[1])
            return true;
        else
            return false;
    }
    
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),Comp);
        for(int i=0;i<intervals.size();i++)
        {
            for(int j=0;j<intervals[0].size();j++)
            {
                cout<<intervals[i][j];
            }
        }
        int count=0;
        int lastValidInterval=0;
        for(int i=1;i<intervals.size();i++) 
            if(overLaps(intervals[i],intervals[lastValidInterval]))
                count++;
            else
                lastValidInterval=i;
        
        return count;
    } 
};