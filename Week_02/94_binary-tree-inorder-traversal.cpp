/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        if (root == nullptr) return result;
        
        // helper(root, result);

        stack<TreeNode*> node_stack;
        while (root != nullptr || !node_stack.empty()) {
            while (root != nullptr) {
                node_stack.push(root);
                root = root->left;
            }
            TreeNode* node = node_stack.top();
            node_stack.pop();
            result.push_back(node->val);

            root = node->right;
        }

        return result;
    }

    void helper(TreeNode* node, vector<int>& result) {
        if (node == nullptr) return;

        if (node->left != nullptr) {
            helper(node->left, result);
        }

        result.push_back(node->val);
        
        if (node->right != nullptr) {
            helper(node->right, result);
        }
    }
};
