class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> permute(vector<int>& nums) {
        if (0 == nums.size()) {
            return result;
        }

        // int visited[nums.size()];
        // memset(visited, 0, sizeof(visited));
        // vector<int> permute_item;
        // GetPermute(nums, 0, permute_item, visited);

        GetPermuteSwap(nums, 0);

        return result;
    }

    void GetPermuteSwap(vector<int>& nums, int start) {
        if (start == nums.size()) {
            result.push_back(nums);
            return;
        }
        for (int i = start ; i < nums.size(); ++i) {
            swap(nums[i], nums[start]);
            GetPermuteSwap(nums, start + 1);
            swap(nums[start], nums[i]);
        }
    }




    void GetPermute(vector<int>& nums, int start, vector<int>& permute_item, int* visited) {
        if (permute_item.size() == nums.size()) {
            result.push_back(permute_item);
            return ;
        }

        for (int i = 0; i < nums.size(); ++i) {
            if (visited[i] == 0 ) {
                visited[i] = 1;
                permute_item.push_back(nums[i]);
                GetPermute(nums, i + 1, permute_item, visited);
                visited[i] = 0;
                permute_item.pop_back();
            }

        }
    }
};
