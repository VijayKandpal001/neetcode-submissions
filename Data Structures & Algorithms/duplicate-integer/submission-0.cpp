class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int>hm;
        for(int i:nums){
            if(hm[i])   return true;
            else    hm[i]=1;
        }
        return false;
    }
};