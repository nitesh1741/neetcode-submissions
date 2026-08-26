class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0;
        unordered_map<char, int> mp;
        int res = 0;
        while(j < s.size()){
            mp[s[j]]++;
            if(mp[s[j]] == 2){
                res = max(res, j - i);
                while(mp[s[j]] != 1){
                    mp[s[i]]--;
                    i++;
                }
            }
            j++;
        }
        return max(res, j - i);
    }
};
