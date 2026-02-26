class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        // unordered_map<int, int> mp;
        
        // for(int i = 0; i<nums.size(); i++) {
        //     int remaining = target -  nums[i];
        //     if(mp.count(remaining))
        //         return {mp[target-nums[i]], i};
        //     mp[nums[i]] = i;
        // }
        
        // return {};


        int n = arr.size();
        vector<pair<int, int>> numsWithIndex;
        for (int i = 0; i < n; i++) {
            numsWithIndex.push_back({arr[i], i});
        }
        sort(numsWithIndex.begin(), numsWithIndex.end());

        int left = 0, right = n - 1;
        while (left < right) {
            int sum = numsWithIndex[left].first + numsWithIndex[right].first;
            if (sum == target) {
                // Return original indices
                return {numsWithIndex[left].second, numsWithIndex[right].second};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return {};  // No pair found
    }
};
