/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> vec_node;

    vector<int> preorderTraversal(TreeNode* root) {
        if (NULL == root) return vec_node;

        // _preorder(root);
        stack<TreeNode*> node_stack;
        node_stack.push(root);
        while (!node_stack.empty()) {
            TreeNode* node = node_stack.top();
            node_stack.pop();
            vec_node.push_back(node->val);

            if (node->right != nullptr) {
                node_stack.push(node->right);
            }

            if (node->left != nullptr) {
                node_stack.push(node->left);
            }
        }
    
        return vec_node;
    }

    void _preorder(TreeNode* node) {
        if (NULL == node) return ;

        vec_node.push_back(node->val);

        if (NULL != node->left) {
            _preorder(node->left);
        }

        if (NULL != node->right) {
            _preorder(node->right);
        }
    }
};
