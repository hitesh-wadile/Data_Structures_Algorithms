class Solution {
public:
    int reverse(int x) {
        int sign = 1;
        if(x<0) sign=-1;

        long long int num = sign*(long long int)x, res=0;

        while(num){
            res = res*10 + (num)%10;
            num/=10;
        }

        if(sign*res > INT_MAX || sign*res < INT_MIN) return 0;
        return sign*res;
    }
};