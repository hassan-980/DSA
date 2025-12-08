class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int i =1;i<=n;i++){
            for(int a=i+1;a<=n;a++){
                int s = a*a + i*i;
                int x = sqrt(s);

                if( x*x == s && x <= n){
                    count += 2;
                }

            }
        }

        return count;
        
    }
};