class Solution {
public:
    bool isPalindrome(int x) {
        long long dup = x, ans =0 ;
        if(x< 0)return false;
        while(dup != 0){
            int digit = dup%10;
            ans = ans*10 + digit;
            dup = dup/10;
        }
        return (ans == x)? true: false;
    }
};