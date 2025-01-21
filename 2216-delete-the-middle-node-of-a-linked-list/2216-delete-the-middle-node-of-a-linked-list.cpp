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

        if( head == nullptr || head->next == nullptr)return nullptr;

        ListNode* fastptr = head;
        ListNode* slowptr = head;
         ListNode* temp =NULL;

        while(fastptr->next != nullptr && fastptr->next->next != nullptr){
            temp = slowptr;
            slowptr = slowptr->next;
            fastptr = fastptr->next->next;
        }

        if(fastptr->next == nullptr){
            temp->next = slowptr->next;
            delete slowptr;

        }else{
           temp = slowptr->next;
           slowptr->next = temp->next;
           delete temp;


        }


  return head;

        
        
    }
};