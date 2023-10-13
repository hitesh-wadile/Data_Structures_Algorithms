class Solution {
public:
    int reverse(int x) {
        long long ans = 0;
        int flag = 0;
        if(x<0){
            x = abs(x);
            flag = 1;
        }
        
        cout << pow(2,31);
        while(x>0){
            int rem = x%10;
            ans = ans*10 + rem;
            x/=10;
        }
        if( ans > pow(2,31)){
            return 0;
        }
        if(flag == 1){
            ans *= -1;
        }
        return ans;
    }
};