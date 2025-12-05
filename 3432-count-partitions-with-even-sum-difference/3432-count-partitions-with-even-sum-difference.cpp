class Solution {
public:
    int countPartitions(vector<int>& nums) {

        int left =0, right=0,totalSum=0, count=0;
        int n = nums.size();
        totalSum = accumulate(begin(nums),end(nums),0);
        for(int i=0;i<=n-2;i++){
            left+= nums[i];
            right = totalSum - left;

            if((left - right) % 2 == 0){
                count++;
            }

        }

        return count;

        
    }
};