class Solution {
public:
    int majorityElement(vector<int>& a) {
         int majorityCount = ((int) a.size()) / 2;
    unordered_map <int , int> frequency;
    for(int &i : a)
    {
        if(++frequency[i] > majorityCount)
            return i;
    }
    return -1;
    }
};