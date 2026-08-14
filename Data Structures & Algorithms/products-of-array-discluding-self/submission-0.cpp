class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long product = 1;
        int flag = 0;
        for(int i: nums){
            if(i == 0){
                flag++;
            }else{
                product *= i;
            }
        }
        
        
        if(flag > 1){
           vector<int> v(nums.size(), 0);
           return v; 
        }

        

        vector<int> res;
        if( flag == 1){
            for(auto i: nums){
                if(i != 0) res.push_back(0);
                else res.push_back(product);
            }
            return res;
        }
        for(auto i: nums) res.push_back(product/i);

        return res;
    }
};
