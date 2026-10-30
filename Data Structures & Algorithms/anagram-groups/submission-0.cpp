class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>hm; 
        // string and its all anagrams
        vector<string>temp= strs;
        for(int i=0; i<temp.size(); i++)
            sort(temp[i].begin(), temp[i].end());
        for(int i=0; i<strs.size(); i++){
            hm[temp[i]].push_back(strs[i]);
        }
        for(auto i: hm)
            ans.push_back(i.second);
        
        return ans;
    }
};
