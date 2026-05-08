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
    bool isPalindrome(ListNode* head) {
          ListNode* temp = head ;
        ListNode* slow = head ;
        ListNode* fast = head ;

        while(fast->next != nullptr && fast->next->next != nullptr){

            slow = slow->next ;
            fast = fast->next->next ;
        }

        ListNode* curr = slow->next ;

        slow->next = nullptr ;
        ListNode* prev = nullptr ;

        while( curr != nullptr){
            ListNode* temp = curr->next ;
            curr->next = prev ;

            prev = curr ;
            curr = temp ;
        }

        while(prev != nullptr){
            if(head->val != prev->val)return false ;
            head = head->next ;
            prev = prev->next ;
        }

    return true ;
        
    }
};