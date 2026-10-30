class Solution {
public:
    bool isPalindrome(string s) {
        for (char &c : s) {
            c = tolower(c);
        }
        int st=0, e=s.size()-1; 
        while(st<e){
            if(isalnum(s[st]) && isalnum(s[e])){
                if(s[st] == s[e]){
                    st++;
                    e--;
                }
                else    return false;
            }

            if(!isalnum(s[st]) ) st++;
            if(!isalnum(s[e]))  e--;
        }

        return true;
    }
};
