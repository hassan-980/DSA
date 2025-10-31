class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {

        set<int> unique;
        vector<int> result;
        

        for( int num : nums){
            if( unique.count(num)){
                result.push_back(num);
            }else{
                unique.insert(num);
            }
        }

       
        return result;
        
    }
};