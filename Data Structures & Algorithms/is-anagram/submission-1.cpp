class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>hm1;
        unordered_map<char, int>hm2;

        for(int i=0; i<s.size(); i++)
            hm1[s[i]]++;
        for(int i=0; i<t.size(); i++)
            hm2[t[i]]++;
        for(char c: s)
            if(hm1[c]!=hm2[c])  return false;

        return hm1.size()==hm2.size();
    }
};
