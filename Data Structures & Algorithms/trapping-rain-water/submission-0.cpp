class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        int n = height.size();
        vector<int> right_max(n);

        int right_mx = INT_MIN;
        for(int i = n - 1; i >= 0; i--){
            right_mx = max(right_mx, height[i]);
            right_max[i] = right_mx;
        }

        int left_mx = INT_MIN;
        for(int i = 0; i < n; i++){
            left_mx = max(left_mx, height[i]);
            ans += min(left_mx, right_max[i]) - height[i];
        }
        
        return ans;
    }
};
