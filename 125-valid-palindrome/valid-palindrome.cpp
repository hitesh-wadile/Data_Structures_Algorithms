class Solution {
public:

    bool checkPalindrome(int i, vector<char>& ch){
        int n = ch.size();
        if(i>=n/2) return true;
        if(tolower(ch[i])!=tolower(ch[n-i-1])) return false;
        return checkPalindrome(i+1,ch);

    }
    bool isPalindrome(string s) {
        vector <char> ch;

        for(auto &c : s){
            if(isalnum(c)){
                ch.push_back(tolower(c));
            }
        }

        return checkPalindrome(0,ch);
    }
};