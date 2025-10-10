class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
        vector<int> answer(n,0);

        for(int i = n-1 ; i>=0 ; i--){

            int ni = i + k;

            if( ni >= n){
                answer[i] = energy[i];
            }else{
                answer[i] = answer[ni] + energy[i];
            }

           


            
        }

         int maxValue= INT_MIN;

            for(int i =0 ; i<n ;i++){
                maxValue = max( answer[i],maxValue);
            }
        return maxValue;
    }
};