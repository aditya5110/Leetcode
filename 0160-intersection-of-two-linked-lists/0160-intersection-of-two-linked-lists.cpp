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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        while(headA!=nullptr){
            
            ListNode* tempb = headB;
            while(tempb!=nullptr){
                if(tempb == headA)return tempb;
                tempb = tempb->next;
            }
            
            headA = headA->next;
        }
        
        return nullptr;
    }
};