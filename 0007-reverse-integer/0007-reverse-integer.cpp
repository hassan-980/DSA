class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while( x != 0 ){
            if (result > INT_MAX / 10 || result < INT_MIN / 10) {
                return 0;
            }
            int lastDigit = x % 10;
            result = result*10 + lastDigit;
            x /= 10;

        }
        return result;
    }
};

