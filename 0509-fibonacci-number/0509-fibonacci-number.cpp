class Solution {
public:
    int fib(int n) {

        if(n <= 1)
            return n;

        int secLast = 0;
        int last = 1;
        for(int i = 2; i <= n; i++){
            int curr = last + secLast;
            secLast = last;
            last = curr;
        }

        return last;
    }
};

