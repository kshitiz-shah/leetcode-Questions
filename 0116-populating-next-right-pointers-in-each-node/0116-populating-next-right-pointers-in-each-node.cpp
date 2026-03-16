/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {

        if(root == nullptr)return root;

        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            vector<int> level ;
            int levelsize = q.size();
            Node* temp = nullptr;

            for(int i = 0 ; i < levelsize ;i++){
                Node* node = q.front();
                q.pop();
                node->next = temp ;
                temp = node ;
                
                if(node->right != nullptr)q.push(node->right);
                if(node->left != nullptr)q.push(node->left);

            }
        }

      
    return root ;
        
    }
};