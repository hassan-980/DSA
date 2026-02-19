class Solution {
public:
    int fib(int N) {
           if (N <= 1) {
        return N;
    }
    // Recursive case: sum of (N-1)th and (N-2)th Fibonacci numbers
    int last = fib(N - 1);   // (N-1)th Fibonacci
    int slast = fib(N - 2);  // (N-2)th Fibonacci

    return last + slast;
    }
};

