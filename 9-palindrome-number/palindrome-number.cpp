class Solution {
public:
    bool isPalindrome(int x) {
        long long int num = x;
        long long int res =0;
        if(x<0){
            return false;
        }

        while(x){
            res = res * 10 + x%10;
            x /= 10;
        }

        if(num == res) return true;
        return false;


    }
};