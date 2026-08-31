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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        if(head == nullptr || head->next == nullptr || head->next->next == nullptr)return {-1,-1};


       ListNode* prev= head ;
        ListNode* curr = head->next ;
        vector <int> ans ;
        int ind = 1 ;
        

        while(curr->next != nullptr){
  if(curr->val > prev->val && curr->val > curr->next->val) ans.push_back(ind);
  if(curr->val < prev->val && curr->val < curr->next->val) ans.push_back(ind);
  ind++ ;

  prev= curr ;
  curr = curr->next ;
        }
        if(ans.size() <2)return {-1,-1};

        sort(ans.begin(),ans.end());

        for(int i = 0 ;i < ans.size();i++){
            cout<<ans[i]<<" ";
        }

        int maxdis = (ans[ans.size()-1] - ans[0]);
        int mindis = INT_MAX ;

        for(int i = 1; i< ans.size();i++){

            mindis = min(mindis , ans[i]- ans[i-1]);

        }
        return {mindis , maxdis};
    }
};