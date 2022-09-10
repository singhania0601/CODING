class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
 int current = arr[0];
        
        // if n < current then we merge and check stack
        // if n < s.top() then pop from stack
        // if n >= current then push current to stack and update current
        stack<int> s;
        auto it = arr.begin() + 1;
        while (it != arr.end()){
            int n = *it;
            if (n < current) {
                while (!s.empty() && n < s.top()) {
                    s.pop();
                }
            } else {
                s.push(current);
                current = n;
            }
            it++;
        }
        return s.size() + 1;
    }
};