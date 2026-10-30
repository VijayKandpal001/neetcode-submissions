class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // bucket sort approach 
        unordered_map<int, int>hm;
        vector<vector<int>>freq(nums.size()+1);

        for(int i:nums) hm[i]++;
        for(auto &x:hm)
            freq[x.second].push_back(x.first);

        vector<int>ans;
        for(int i=freq.size()-1; i>0; i--){
            for(int &ele:freq[i]){
                if(ans.size()==k)   return ans;
                ans.push_back(ele);
            }
        }
        return ans;
    }
};
