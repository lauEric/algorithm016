class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> combine(int n, int k) {
        if (n < k) return result;
        vector<int> result_item;
        GetCombine(n, k, 1, result_item);
        return result;
    }

    void GetCombine(int range, int count, int start, vector<int> result_item) {
        if (count == 0 ) {
            result.push_back(result_item);
            return ;
        }
        for (int i = start; i <= (range - count + 1); ++i) {
            result_item.push_back(i);
            GetCombine(range, count - 1, i + 1, result_item);
            result_item.pop_back();
        }
    }
};
