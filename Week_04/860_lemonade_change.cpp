class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five_cnt = 0, ten_cnt = 0;
        for (auto item : bills) {
            if (5 == item) {
                five_cnt++;
            } else if (10 == item) {
                five_cnt--;
                ten_cnt++;
            } else {
                if (ten_cnt > 0) {
                    ten_cnt--;
                    five_cnt--;
                } else {
                    five_cnt -= 3;
                }
            }
            if (five_cnt < 0) return false;
        }
        return true;
    }
};
