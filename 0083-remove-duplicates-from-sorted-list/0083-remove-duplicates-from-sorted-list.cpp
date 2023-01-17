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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* Curr = head;
        ListNode* Next = Curr->next;
        while(Next!=NULL){
            if(Curr->val == Next->val){
                Curr->next = Next->next;
                Next = Curr->next;
            }
            else{
                Curr->next = Next;
                Curr = Next;
                Next = Next->next;
            }
        }
        
        
        return head;
    }
};