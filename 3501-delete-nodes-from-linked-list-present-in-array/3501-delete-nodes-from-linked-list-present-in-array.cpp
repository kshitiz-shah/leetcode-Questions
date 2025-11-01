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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set <int> check;
        for(int i = 0 ;i< nums.size();i++){
            check.insert(nums[i]) ;
        }

        ListNode* temp = head;

        while(head->next != nullptr){
            if((check.find(head->val) != check.end())){
                head= head->next;
            }
            else break;
        }
           temp = head;
        ListNode* mover = head;

        while (temp && temp->next != nullptr) {
            if (check.find(temp->next->val) != check.end()) {
                // skip the node if value found in set
                temp->next = temp->next->next;
            } else {
                temp = temp->next;
            }
        }

      return head;
        
    }
};