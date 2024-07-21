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
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!=nullptr&&fast->next!=NULL){
            slow = slow->next;
            fast= fast->next->next;
            if(slow==fast){
                ListNode* idx1=head;
                ListNode* idx2=fast;
                while(idx1!=idx2){
                    idx1=idx1->next;
                    idx2=idx2->next;
                }
                return idx2;
            }
        }
        return NULL;
    }
};