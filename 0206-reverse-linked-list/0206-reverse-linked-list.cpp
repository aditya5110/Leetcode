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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)return head;
        ListNode * curr = head;
        ListNode * prev = head;
        while(curr->next!=nullptr){
            ListNode* next = curr->next;
            if(curr == head){
                curr->next = nullptr;
            }else{
                curr->next = prev;
            }
            prev = curr;
            curr = next;
        }
        curr ->next = prev;
        return curr;
    }
};