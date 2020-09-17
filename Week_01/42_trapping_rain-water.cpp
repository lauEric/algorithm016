class Solution {
public:
    int trap(vector<int>& input_vec) {
        int left = 0, right = input_vec.size() - 1;
        int left_max_height = 0, right_max_height = 0, result = 0;
        while (left < right) {
            if (input_vec[left] < input_vec[right]) {
                if (input_vec[left] > left_max_height) {
                    left_max_height = input_vec[left];
                } else {
                    result += (left_max_height - input_vec[left]);
                }
                ++left;
            } else {
                if (input_vec[right] > right_max_height) {
                    right_max_height = input_vec[right];
                } else {
                    result += (right_max_height - input_vec[right]);
                }
                --right;
            }
        }
        return result;
    }
};
