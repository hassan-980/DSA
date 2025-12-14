class Solution {
public:
    int numberOfWays(string corridor) {
        int M = 1e9 + 7;
        int n = corridor.size();
        vector<int> seat_pos;

        for(int i=0; i<n; i++){
            if(corridor[i] == 'S'){
                seat_pos.push_back(i);
            }
        }  

        int m = seat_pos.size();
        if( m % 2 != 0 || m == 0 ){
            return 0;
        }
        
        int prev_seat = seat_pos[1];
        long long result=1;
        for(int i=2; i<m; i+=2){
            int curr_seat = seat_pos[i];
            result = (result * (curr_seat - prev_seat)) % M;
            prev_seat = seat_pos[i+1];
        }

        return result;

    }
};