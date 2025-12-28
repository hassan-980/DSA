using ll = long long;
using pii = pair<ll, int>;

class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        priority_queue<int, vector<int>, greater<int>> availableRooms;
      
        priority_queue<pii, vector<pii>, greater<pii>> occupiedRooms;
      
       
        for (int i = 0; i < n; ++i) {
            availableRooms.push(i);
        }
   
        vector<int> meetingCount(n);
        sort(meetings.begin(), meetings.end());
      
       
        for (auto& meeting : meetings) {
            int startTime = meeting[0];
            int endTime = meeting[1];
          
            // Free up rooms that have finished before current meeting starts
            while (!occupiedRooms.empty() && occupiedRooms.top().first <= startTime) {
                availableRooms.push(occupiedRooms.top().second);
                occupiedRooms.pop();
            }
          
            int assignedRoom = 0;
          
            if (!availableRooms.empty()) {
                // Assign the lowest numbered available room
                assignedRoom = availableRooms.top();
                availableRooms.pop();
                occupiedRooms.push({endTime, assignedRoom});
            }
            
            else {
                // Get the room that will be free earliest
                auto earliestFreeRoom = occupiedRooms.top();
                occupiedRooms.pop();
              
                assignedRoom = earliestFreeRoom.second;
                ll delayedEndTime = earliestFreeRoom.first + (endTime - startTime);
                occupiedRooms.push({delayedEndTime, assignedRoom});
            }
        
            ++meetingCount[assignedRoom];
        }
      
       
        int mostUsedRoom = 0;
        for (int i = 0; i < n; ++i) {
            if (meetingCount[mostUsedRoom] < meetingCount[i]) {
                mostUsedRoom = i;
            }
        }
      
        return mostUsedRoom;
    }
};