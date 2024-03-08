/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr || head->next == nullptr)return false;
        ListNode* curr = head;
        ListNode* fast = head;
        
        while(fast!=nullptr){
            fast = fast->next;
            if(fast)fast = fast->next;
            curr = curr->next;
            if(curr==fast)return true;
        }
        
        return false;
    }
};