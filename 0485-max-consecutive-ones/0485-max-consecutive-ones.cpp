class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count=0,count=0;

        for(auto it : nums ){
            if(it == 1){
                count++;
                if(count > max_count){
                    max_count = count;
                }
            }else{
                count=0;
            }
        }
        return max_count;
    }
};