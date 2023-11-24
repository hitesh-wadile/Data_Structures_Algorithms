class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int c = x;
        int d;
        int pol = 0;
        while (c > 0) {
            d = c % 10;
            c = (int)c / 10;
            if ((pol + d) > INT_MAX/10) {
                return false;
            }
            pol = pol*10 + d;
            //cout << c << " " << d << endl;
        }
        return (x == pol);
    }
};