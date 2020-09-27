class Solution {
public:
    vector<vector<int> > result;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        if (0 == nums.size()) return result;

        int visited[nums.size()];
        memset(visited, 0, sizeof(visited));

        sort(nums.begin(), nums.end());

        // vector<int> result_item;
        // GetPermute(nums, 0, visited, result_item);
        GetPermuteSwap(nums, 0);

        return result;
    }

    void GetPermuteSwap(vector<int> nums, int start) {
        if (start == nums.size()) {
            result.push_back(nums);
            return;
        }
        for (int i = start; i < nums.size(); ++i) {
            if (i != start && nums[i] == nums[start]) continue;
            swap(nums[i], nums[start]);
            GetPermuteSwap(nums, start + 1);
        }
    }

    void GetPermute(vector<int>& nums, int start, int* visited, vector<int>& result_item) {
        if (start == nums.size()) {
            result.push_back(result_item);
            return ;
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (1 == visited[i] || (i > 0 && 0 == visited[i - 1] && nums[i] == nums[i - 1])) {
                continue;
            }

            visited[i] = 1;
            result_item.push_back(nums[i]);

            GetPermute(nums, start + 1, visited, result_item);

            visited[i] = 0;
            result_item.pop_back();
        }
    }
};
