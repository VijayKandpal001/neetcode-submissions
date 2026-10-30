class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int>hm;
        for(int &i:nums)
            hm[i]=1;

        int ans=0;
        for(int i:nums){
            int j=i;
            int cnt=0;
            if(hm[i-1]==0)
                while(hm[j]){
                    j++; cnt++;
                }
            ans=max(ans, cnt);
        }
        return ans;
    }
};
