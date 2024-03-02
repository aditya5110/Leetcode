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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* c1 = l1;
        ListNode* c2 = l2;
        int carry = 0;
        int sum = 0;
        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;
        while(c2!=nullptr || c1 !=nullptr){
            sum = 0;
            if(c1!=nullptr)sum += c1->val;
            if(c2!=nullptr)sum += c2->val;
            
            sum += carry;
            
            carry = sum/10;
            sum = sum%10;
            
            ListNode* temp = new ListNode(sum);
            
            curr->next = temp;
            curr = curr->next;
            
            if(c1)c1 = c1->next;
            if(c2)c2 = c2->next;
            
        }
        
        // while(c1!=nullptr){
        //     ListNode* temp = new ListNode(c1->val + carry);
        //     carry = 0;
        //     c1 = c1->next;
        //     curr ->next = temp;
        //     curr = curr->next;
        // }
        // while(c2!=nullptr){
        //     ListNode* temp = new ListNode(c2->val + carry);
        //     carry = 0;
        //     c2 = c2->next;
        //     curr ->next = temp;
        //     curr = curr->next;
        // }
        
        if(carry!=0){
            ListNode* temp = new ListNode(carry);
            curr ->next = temp;
            curr = curr->next;
        }
        
        return dummy->next;
        
        
    }
};