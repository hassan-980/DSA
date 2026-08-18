class Solution {
public:
    int maxArea(vector<int>& height) {

        int maxA = INT_MIN;
        int rp = height.size()-1;
        int lp = 0;
        while(rp > lp){
            int currH = min(height[rp],height[lp]);
            int currA = currH * (rp-lp);
            maxA = max(currA,maxA);
            (height[rp] > height[lp]) ? lp++ : rp--;
        }
        return maxA;
    }
};