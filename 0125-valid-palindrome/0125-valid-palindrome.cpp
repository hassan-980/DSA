class Solution {
public:
    bool isPalindrome(string s) {

        int p2 = s.size()-1;
        int p1 =0;

        while( p2>p1){
               if (!isalnum(s[p1])) {
                ++p1;
            }else if (!isalnum(s[p2])) {
                --p2;
            }else if( tolower(s[p1]) != tolower(s[p2]) ){
                return false;
            }else{
                p1++;
                p2--;
            }

        }
        return true;


    }
};