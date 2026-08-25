class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0, j = height.size() - 1, maxX = 0, maxY = 0, ans = 0;
        while(i <= j){
            maxX = max(maxX, height[i]);
            maxY = max(maxY, height[j]);
            if(height[i] < height[j]){
                ans += min(maxX, maxY) - height[i];
                i++;
            }
            else{
                ans += min(maxX, maxY) - height[j];
                j--;
            }
        }
        return ans;
    }
};
