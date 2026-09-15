class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int numStrings = strs.size();

        for (int charIndex = 0; charIndex < strs[0].size(); ++charIndex) {
            
            for (int stringIndex = 1; stringIndex < numStrings; ++stringIndex) {

                if (strs[stringIndex].size() <= charIndex ||
                    strs[stringIndex][charIndex] != strs[0][charIndex]) {
                
                    return strs[0].substr(0, charIndex);
                }
            }
        }

        return strs[0];
    }
};