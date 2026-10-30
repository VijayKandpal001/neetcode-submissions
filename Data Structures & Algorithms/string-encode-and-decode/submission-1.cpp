class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string="";
        for(auto x:strs){
            encoded_string+= to_string(x.size())+'#'+x;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string temp="";
        for(int i=0; i<s.size(); i++){
            if(s[i]=='#'){
                int str_length= stoi(temp);
                int ctr=1;
                temp="";
                while(ctr<=str_length){
                    temp+=s[++i];
                    ctr++;
                }  
                ans.push_back(temp);
                temp="";
                continue;
            }   
            temp+=s[i];
        }
        return ans;
    }
};
