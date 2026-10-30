class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int product=1, zero_cnt=0;

        for(int i:nums){
            if(i==0)    zero_cnt++;
            else    product*=i;
        }

        if(zero_cnt>1)  return vector<int>(n, 0);
        vector<int>ans(n,1);
        for(int i=0; i<n; i++){
            if(zero_cnt>0)
                ans[i]=(nums[i]==0)? product: 0;
            else
                ans[i]=product/nums[i];
        }
        return ans;
    }
};
