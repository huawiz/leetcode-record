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
    ListNode* middleNode(ListNode* head) {
        int len = 0;
        ListNode* first = head;
        while(first!=nullptr)
        {
            first = first->next;
            len++;
        }
        first = head;
        len = len/2;
        for(int i =0;i<len;i++){
            first = first->next;
        }
        return first;
    }
};