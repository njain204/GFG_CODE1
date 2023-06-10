class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        if (words.empty()) return res;
        int n = s.size(), m = words.size(), k = words[0].size();
        unordered_map<string, int> mp;
        for (string& word : words) mp[word]++;
        for (int i = 0; i < k; i++) {
            int left = i, count = 0;
            unordered_map<string, int> t;
            for (int j = i; j <= n - k; j += k) {
                string str = s.substr(j, k);
                if (mp.count(str)) {
                    t[str]++;
                    if (t[str] <= mp[str]) count++;
                    else {
                        while (t[str] > mp[str]) {
                            string str1 = s.substr(left, k);
                            t[str1]--;
                            if (t[str1] < mp[str1]) count--;
                            left += k;
                        }
                    }
                    if (count == m) {
                        res.push_back(left);
                        t[s.substr(left, k)]--;
                        count--;
                        left += k;
                    }
                } else {
                    t.clear();
                    count = 0;
                    left = j + k;
                }
            }
        }
        return res;
    }
};