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
    ListNode* removeElements(ListNode* head, int value) {
        if(head==NULL){
            return head;
        }
        ListNode* Curr = head;
        ListNode* Next = head->next;
        while(Next!=NULL){
            if(Next->val==value){
                Curr->next = Next->next;
                Next = Next->next;
            }
            else{
                Curr = Next;
                Next = Next->next;
            }
        }
        if(head->val==value){
            return head->next;
        }
        return head;
    }
};