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
        ListNode* curA = headA;
        ListNode* curB = headB;
        int lenA = 0,lenB = 0;
        while(curA!=NULL){
            curA = curA->next;
            lenA++;
        }
        curA = headA;
        while(curB!=NULL){
            curB = curB->next;
            lenB++;
        }
        curB = headB;

        if(lenB>lenA){
            swap(curA,curB);
            swap(lenA,lenB);
        }
        
        int gap = lenA-lenB;
        while(gap--){
            curA=curA->next;
        }
        while(curA!=NULL){
            if(curA==curB){
                return curA;
            }
            curA=curA->next;
            curB=curB->next;
        }
        return NULL;
    }
};