class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int , int> hash_map;
        for (int i = 0; i < nums.size(); ++i) {
            if (hash_map.count(target - nums[i]) > 0) {
                return {hash_map[target - nums[i]], i};
            } else {
                hash_map[nums[i]] = i;
            }
        }
        return {-1, -1};
    }
};
