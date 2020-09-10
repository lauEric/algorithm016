class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int nums_size = nums.size();
        if (0 == nums_size || k <= 0 || 0 == k % nums_size) return;
        k %= nums_size;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
