class Solution {
public:
    int minOperations(vector<int>& nums) {
        stack<int> stack;
        int operation=0;
        for(int i=0; i<nums.size(); i++ ){

            while( !stack.empty() && stack.top()>nums[i]){
                stack.pop();
            }

            if( nums[i]==0 ) continue;

            while( stack.empty()  || stack.top()<nums[i] ){
                stack.push(nums[i]);
                operation++;
            }
        }

    return operation;
    }
};