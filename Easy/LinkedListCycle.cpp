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
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        while(ptr1 != NULL && ptr1->next != NULL){
            ptr1 = ptr1->next->next;
            ptr2 = ptr2->next;
            if(ptr1 == ptr2)
                return true;
        }
        return false;
    }
};
