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
    ListNode* deleteMiddle(ListNode* head) {

       ListNode* fast=head;
        ListNode* slow=head;
        if (head == NULL || head->next == NULL) {
            return NULL;
        }
        fast = head->next->next;

        // Move 'fast' pointer twice as fast as 'slow'
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Delete the middle node by skipping it
        slow->next = slow->next->next;
        return head;

        
        
    }
};