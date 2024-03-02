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
        if(head == nullptr || head->next == nullptr)return nullptr;
        
//         ListNode* curr = head;
//         int len = 0;
        
//         while(curr!=nullptr){
//             curr = curr->next;
//             len++;
//         }
        
//         n = len-n;
//         curr = head;
        
//         if(n==0)return head->next;
        
        
//         while(n>1){
//             curr = curr->next;
//             n--;
//         }
//         curr -> next = curr->next->next;
        
//         return head;
        
        ListNode* start = new ListNode();
        start->next = head;
        
        ListNode* fast = start;
        ListNode* slow = start;
        
        for(int i = 0;i<n;i++){
            fast = fast->next;
        }
        
        while(fast->next!=nullptr){
            fast = fast->next;
            slow = slow->next;
        }
        
        slow ->next = slow->next->next;
        
        return start->next;
    }
};