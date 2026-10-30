class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>hm; 
        // string and its all anagrams
        for(string i:strs){
            string original_string= i;
            sort(i.begin(), i.end());
            hm[i].push_back(original_string);
        }
        for(auto i: hm)
            ans.push_back(i.second);
        
        return ans;
    }
};
