class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if (0 == g.size() || 0 == s.size()) return 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int result = 0;
        for (int i = 0; i < s.size() && result < g.size(); ++i) {
            if (s[i] >= g[result]) {
                result++;
            }
        }
        return result;
    }
};
