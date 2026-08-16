class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;
        unordered_map<int, int> mp;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]] = mp[nums[i] - 1] + 1;
            res = max(res, mp[nums[i]]);
        }
        return res;
    }
};
