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
    unordered_map<int, int> inorder_map;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); ++i) {
            inorder_map[inorder[i]] = i;
        }
        return BuildTreeRecursive(preorder, inorder, 0, 0, inorder.size() - 1);
    }

    TreeNode* BuildTreeRecursive(vector<int>& preorder, vector<int>& inorder, int p_begin, int i_begin, int i_end) {
        if (p_begin > preorder.size() - 1 || i_begin > i_end) {
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[p_begin]);
        int inorder_index = inorder_map[preorder[p_begin]];

        root->left = BuildTreeRecursive(preorder, inorder, p_begin + 1, i_begin, inorder_index - 1);
        root->right = BuildTreeRecursive(preorder, inorder, p_begin + inorder_index - i_begin + 1, inorder_index + 1, i_end);
        return root;
    }

};
