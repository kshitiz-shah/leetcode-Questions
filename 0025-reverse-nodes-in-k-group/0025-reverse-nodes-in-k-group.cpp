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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == nullptr)return head ;

        vector <int> ans ;
        ListNode* temp = head ;
        while(temp){
            ans.push_back(temp->val);
            temp = temp->next ;

        }
        int ptr = 0 ;
        int n = ans.size();
      while(ptr < n){
        if( ptr + k  <= n){
            reverse(ans.begin()+ptr , ans.begin()+ (ptr + k));
            ptr += k ;
        }else{
            break;
        }
      }
      ListNode* iterator = head ;
      int i = 0;
      while(iterator){
        iterator->val = ans[i++];
        iterator = iterator->next ;

      }



    return head ;

        
    }
};