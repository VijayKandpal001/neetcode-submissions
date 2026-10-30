class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>hm;
        for(int i=0; i<nums.size(); i++)
            hm[nums[i]]=i;
        
        for(int i=0; i<nums.size(); i++){
            if(hm.count(target-nums[i]) && hm[target-nums[i]]!=i)
                return {i, hm[target-nums[i]]};
        }
        return {};
    }
};
