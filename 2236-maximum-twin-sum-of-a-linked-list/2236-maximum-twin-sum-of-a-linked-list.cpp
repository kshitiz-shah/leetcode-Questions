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

        ListNode* slow = head ;
         ListNode* fast = head ;
          
        while(fast != nullptr){

            fast = fast->next->next ;
            slow = slow->next ;
                
          }

          ListNode* curr = nullptr ;
        

          while(slow != nullptr){
            ListNode* mover = slow->next ;
            slow->next = curr ;
            curr = slow ;
            slow = mover ;
          }

          int ans = 0;

          while(curr != nullptr){
            ans = max(ans , head->val + curr->val);
            head =head->next ;
            curr = curr->next ;

          }




    return ans ;
        
    }
};