class Solution {
public:
    long long n = 1;
    unordered_map<string, vector<string>> mp;
    string encode(vector<string>& strs) {
        string key = to_string(n);
        mp[key] = strs;
        n++;
        return key;
    }

    vector<string> decode(string s) {
        return mp[s];
    }


};
