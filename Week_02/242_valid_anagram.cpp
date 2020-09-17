class Solution {
public:
// 更通用
/*
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> mapping_cnt;
        for (int i = 0; i < s.size(); ++i) {
            mapping_cnt[s[i]]++;
            mapping_cnt[t[i]]--;
        }
        for (auto item_map : mapping_cnt) {
            if (0 != item_map.second) return false;
        }

        return true;
    }
*/

// 只有26个字母
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        int alpha_cnt[26] = {0};

        for (int i = 0; i < s.size(); ++i) {
            alpha_cnt[s[i] - 'a']++;
            alpha_cnt[t[i] - 'a']--;
        }

        for (int j = 0; j < 26; ++j) {
            if (alpha_cnt[j] != 0) return false;
        }
        return true;
    }
};
