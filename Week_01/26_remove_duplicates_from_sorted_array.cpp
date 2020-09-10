class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (0 == nums.size()) return 0;
        if (1 == nums.size()) return 1;

        int j = 1;
        int nums_size = nums.size();
        for (int i = 1; i < nums_size; ++i) {
            if (nums[i] != nums[i - 1]) {
                nums[j++] = nums[i];
            }
        }
        return j;
    }
};
