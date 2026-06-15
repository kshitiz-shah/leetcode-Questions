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
    int pairSum(ListNode* head) {
        if(!head)return 0 ;

        ListNode* temp = head ;
        ListNode* slow = head ;
        ListNode* fast = head ;

        while(fast->next->next != nullptr && fast->next != nullptr){
            fast = fast->next->next ;
            slow = slow->next ;
        }
        ListNode* newhead = slow->next ;
        slow->next = nullptr ;

      ListNode* rightside =   reverse(newhead );
      ListNode* leftside = head ;
      int ans = 0;

      while(rightside ){
        ans = max(ans , leftside->val + rightside->val);
        leftside = leftside->next ;
        rightside = rightside->next ;

      }

     return ans ;

        
    }
    ListNode* reverse(ListNode* newhead ){

        ListNode* temp = newhead ;
        ListNode* prev = nullptr ;

        while(temp != nullptr){
            ListNode* curr = temp->next ;
            temp->next = prev ;

            prev = temp ;
            temp = curr ;
        }
        return prev; 
    }
    
};