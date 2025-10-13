class Solution {
public:
    bool isAnagram(string &s1, string &s2){
        
        int arr[26]= {0};
        
        for(char &ch : s1){
            ++arr[ch - 'a'];
        }
        for(char &ch : s2){
            --arr[ch - 'a'];
        }

        for(int i=0; i<26;i++){
            if(arr[i]!=0){
                return false;
            }
        }

        return true;
    }    


    vector<string> removeAnagrams(vector<string>& words) {

        int n =words.size();
        vector<string> ans;
        ans.push_back(words[0]);
        for(int i=1; i<n; i++){
            if(!isAnagram( words[i] , ans.back())){
                ans.push_back(words[i]);
            }
        }

        return ans;

        
    }
};