class Solution {
public:
    bool isPalindrome(int x) {
        int temp , digit;
        long long rev = 0;
        if( x < 0 ){
            return false;
        }
        temp = x;

        while( temp>0 ){
            int lastDigit = temp%10;
            rev = rev*10 + lastDigit;
            temp /= 10;
        }

        if( rev != x ){
            return false;
        }
    return true;












        // int temp,digit;
        // long long rev=0;
        // if( x < 0 ){
        //     return false;
        // }
        // temp = x;

        // while( temp>0 ){
        //     digit = temp % 10;
        //     rev = rev * 10 + digit;
        //     temp /= 10;

        // }

        // if( rev == x ){
        //     return true;
        // }else{
        //     return false;
        // }


    }
};