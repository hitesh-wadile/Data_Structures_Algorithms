class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int num = x;
        int rem;
        int res =0;

        while(num > 0){
            rem = num%10;
            num = (int)num / 10;

            if((res+rem)>INT_MAX/10) return false;

            res = res*10 + rem;
        }
        return (x==res);

    }
};