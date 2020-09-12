class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nums_size = nums.size();
        if (0 == nums_size || 1 == nums_size) return;

        int j = 0;
        for (int i = 0; i < nums_size; ++i) {
            if (0 != nums[i]) {
                nums[j] = nums[i];
                if (i != j) {
                    nums[i] = 0;
                }
                ++j;
            }
        }
    }
};
