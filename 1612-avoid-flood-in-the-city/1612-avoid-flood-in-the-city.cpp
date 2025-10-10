class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        // lenghth
        int n = rains.size();
        unordered_map<int , int > mp; // to store frist day rain
        set <int> st ; // to store zeros 

        vector<int> ans(n,1);

        for(int i = 0; i < n ; i++){

            int lake = rains[i];

            if( lake == 0){
                st.insert(i);
            }else{
                ans[i] = -1;

                // also check the lake already contain water , if yes dry it up

                if( mp.count(lake) ){
                    auto it = st.lower_bound( mp[lake] );

                    if( it == st.end() ){
                        return {};
                    }

                    ans[*it] = lake;
                    st.erase(it);

                }

                mp[lake] = i;

            }

        }




        return ans;
    }
};