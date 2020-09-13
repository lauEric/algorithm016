class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int digits_size = digits.size();
        for (int i = digits_size - 1; i >= 0; --i) {
            if (9 == digits[i]) {
                digits[i] = 0;
            } else {
                digits[i]++;
                return digits;
            }
        }
        digits[0] = 1;
        digits.push_back(0);
        return digits;
    }
};
