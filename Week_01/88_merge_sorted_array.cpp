class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int nums1_iter = m - 1;
        int nums2_iter = n - 1;
        int total_iter = m + n - 1;
        while (nums1_iter >= 0 && nums2_iter >= 0) {
            if (nums1[nums1_iter] > nums2[nums2_iter]) {
                nums1[total_iter--] = nums1[nums1_iter--];
            } else {
                nums1[total_iter--] = nums2[nums2_iter--];
            }
        }

        while (nums2_iter >= 0 ) {
            nums1[total_iter--] = nums2[nums2_iter--];
        }
        
    }
};
