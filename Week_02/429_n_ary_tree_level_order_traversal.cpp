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
    vector<vector<int>> levelOrder(Node* root) {
        if (nullptr == root) return {};

        vector<vector<int>> result;
        queue<Node*> node_queue;
        node_queue.push(root);
        while (!node_queue.empty()) {
            // 记录每一层需要处理的node个数
            int one_level_size = node_queue.size();
            vector<int> level_result;
            for (int i = 0; i < one_level_size; ++i) {
                Node* item = node_queue.front();
                node_queue.pop();
                level_result.push_back(item->val);
                // 记录下一层的node个数
                for (auto child : item->children) {
                    node_queue.push(child);
                }
            }
            result.push_back(level_result);
        }

        return result;
    }
};
