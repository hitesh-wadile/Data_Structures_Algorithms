class Solution {
public:
    bool isPalindrome(int x) {
        long long int temp=x,pal=0;
        if(x<0)
            return false;
        else{
            while(temp>0){
                pal = pal*10 + temp%10;
                temp = temp/10;
            }
        }
        if(x==pal)
            return true;
        return false;
    }
};