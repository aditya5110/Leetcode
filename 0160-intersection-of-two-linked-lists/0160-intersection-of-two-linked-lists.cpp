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
        
        unordered_map<ListNode*,int> u;
        while(headA!=nullptr){
            u[headA]++;
            headA = headA ->next;
        }
        
        while(headB!=nullptr){
            if(u.find(headB) != u.end())return headB;
            headB = headB ->next;
        }
        
        return nullptr;
    }
};