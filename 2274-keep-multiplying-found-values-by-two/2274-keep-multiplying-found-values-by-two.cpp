class Solution {
public:
int findFinalValue(vector<int>& nums, int original) {
bool found = false;
for(auto &num: nums)
if(num == original)
{
found = true;
break;
}
return found? findFinalValue(nums,2 * original) : original;
}
};