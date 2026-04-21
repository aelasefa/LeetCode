class Solution {
public:
    bool    check(vector<string> &strs, size_t idx, char c) {
        size_t strs_size = strs.size();
        for (size_t j = 1; j < strs_size; j++) {
            std::string test = strs[j];
            if (idx >= test.size() || test[idx] != c)
                return (false);
        }
        return (true);
    }
    string longestCommonPrefix(vector<string>& strs) {
        std::string result("");
        size_t strs_size = strs.size();
        if (strs_size == 1)
            return (strs[0]);
        if (strs_size == 0)
            return ("");
        std::string base = strs[0];
        for (size_t i = 0; i < base.size(); i++) {
            if (check(strs, i, base[i])) {
                result.push_back(base[i]);
            }
            else
                return (result);
        }
        return (result);
    }
};