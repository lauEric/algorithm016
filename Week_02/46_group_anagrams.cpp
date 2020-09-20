class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // unordered_map 性能比map好。在无序key排序的场景下，尽量使用unordered_map
        unordered_map<string, vector<string>> reuslt_map;

    /*
        for (auto str : strs) {
            string sorted_str = str;
            // 字符串原生的排序函数，#include<algorithm>
            sort(sorted_str.begin(), sorted_str.end());
            reuslt_map[sorted_str].push_back(str);
        }
    */
        for (auto str : strs) {
            reuslt_map[alphat_sord(str)].push_back(str);
        }

        vector<vector<string>> result;
        for (auto item : reuslt_map) {
            result.push_back(item.second);
        }
        return result;
    }

    // 由于只包含小写字母，因此可以用转换为int的形式来对字符串排序
    string alphat_sord(const string& s) {
        int sort_array[26] = {0};
        // 非常常用的一种对字符串处理的方式
        for (char c : s) {
            sort_array[c - 'a']++;
        }

        string result("");
        for (int i = 0; i < 26; ++i) {
            // 巧妙利用字符串的初始化方式，构建字符串
            result += string(sort_array[i], i + 'a');
        }
        return result;
    }
};
