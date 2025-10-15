class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& num) {
        int n = num.size();
        int currRun = 1;
        int prevRun = 0;
        int k=0;// for maximum value


        for(int i=1;i<n;i++){

            if( num[i-1] < num[i]){
                currRun++;
            }else{
                prevRun = currRun;
                currRun =1;
            }

            k = max(k,currRun/2);
            k = max(k, min(currRun,prevRun));


        }

        return k;
        
    }
};