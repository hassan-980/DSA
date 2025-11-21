class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int result = 0;

        // Check for each character from 'a' to 'z'
        for (char c = 'a'; c <= 'z'; c++) {
            int left = -1, right = -1;

            // Find first and last occurrence
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == c) {
                    if (left == -1) left = i;
                    right = i;
                }
            }

            // If character appears at least twice and has characters in between
            if (left != -1 && right != -1 && right - left > 1) {
                bool seen[26] = {false};

                // Mark characters between first and last occurrence
                for (int i = left + 1; i < right; i++) {
                    seen[s[i] - 'a'] = true;
                }

                // Count unique middle characters
                int count = 0;
                for (int i = 0; i < 26; i++) {
                    if (seen[i]) count++;
                }

                result += count;
            }
        }

        return result;
    }
};
