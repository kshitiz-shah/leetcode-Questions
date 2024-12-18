class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = lists.size();
        if (k == 0) return nullptr; // If no linked lists, return nullptr

        // Min-heap to store all values in sorted order
        priority_queue<int, vector<int>, greater<int>> minheap;

        // Populate the min-heap with values from all linked lists
        for (int i = 0; i < k; i++) {
            while (lists[i] != NULL) {
                minheap.push(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        }

        // If the heap is empty, return nullptr
        if (minheap.empty()) return nullptr;

        // Create the merged linked list
        int x = minheap.top();
        minheap.pop();
        ListNode* head = new ListNode(x); // Head of the merged list
        ListNode* curr = head;

        // Build the rest of the merged list from the heap
        while (!minheap.empty()) {
            int temp = minheap.top();
            minheap.pop();
            ListNode* mover = new ListNode(temp);
            curr->next = mover;
            curr = curr->next;
        }

        return head;
    }
};
