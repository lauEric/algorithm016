/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
/*
    vector<int> preorder(Node* root) {
        vector<int> result;
        if (root == nullptr) return result;

        helper(root, result);
        return result;
    }

    void helper(Node* node, vector<int>& result) {
        if (nullptr == node) return;
        result.push_back(node->val);
        for (auto vec_item : node->children) {
            helper(vec_item, result);
        }
    }
*/
    vector<int> preorder(Node* node) {
        vector<int> result;
        if (node == nullptr) return result; 
        
        stack<Node*> node_stack;
        node_stack.push(node);
        while (!node_stack.empty()) {
            Node* tmp_node = node_stack.top();
            node_stack.pop();
            result.push_back(tmp_node->val);

            for(int i = tmp_node->children.size() - 1; i >= 0; --i) {
                node_stack.push(tmp_node->children[i]);
            }
        }
        return result;
    }
};





