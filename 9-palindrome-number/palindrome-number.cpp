class Solution {
public:
    bool isPalindrome(int x) {
        long long int num = x;
        long long int res =0;
        int rem;
        if(x<0){
            return false;
        }

        while(num > 0){
            rem = num%10;
            num = num / 10;

            if((res+rem)>INT_MAX/10) return false;

            res = res*10 + rem;
        }
        return (x==res);

    }
};