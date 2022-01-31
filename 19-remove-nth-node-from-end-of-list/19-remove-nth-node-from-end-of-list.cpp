/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        
        ListNode* cur = head;
        int t = 0;
        while(cur)
        {
            cur = cur->next;
            t++;
            
        }
        
        if(n == t){
            //delete the head
            ListNode* ans = head->next;
            delete head;
            return ans;
        }
        
        cur = head;
        for(int i = 0; i < t; ++i){
            if(i == t-n-1){
                //the node previous to the node to be deleted
                ListNode* to_delete = cur->next;
                cur->next = cur->next->next;
                delete to_delete;
                break;
            }
            cur = cur->next;
        }
        
        return head;
        
}
};