// class Solution {
// public:
//     ListNode* modifiedList(vector<int>& nums, ListNode* head) {

//         unordered_set<int> st(begin(nums),end(nums)); // insert in a set


//         // handle head value
//         while( head != NULL && st.find(head->val) !=  st.end()){
//             ListNode* temp  = head; // store prev head value to delete it
//             head = head->next;
//             delete(temp); // deleting the hanging value
//         }

//         ListNode* curr  = head;

//         while( curr != NULL && curr->next != NULL){
//             if(  st.find(curr->next->val) != st.end()){
//                 ListNode* temp =  curr->next; // store in temp the next node
//                 curr->next =  curr->next->next; // curr-> next updated
//                 delete(temp); // delete the hanging val

//             }else{
//                 curr = curr->next;
//             }
//         }

//         return head;


        
//     }
// };


// class Solution {
// public:
//     ListNode* modifiedList(vector<int>& nums, ListNode* head) {
//         unordered_set<int> st(begin(nums), end(nums));
//         ListNode* prev = NULL;
//         ListNode* curr = head;


//         while (curr != NULL && st.count(curr->val)) {
//             head = curr->next;
//             curr = head;
//         }

//         while (curr != NULL) {
//             int currVal = curr->val;
//             if (!st.count(currVal)) {
//                 prev = curr;
//                 curr = curr->next;
//             } else {
//                 prev->next = curr->next;
//                 curr = curr->next;
//             }
//         }
//         return head;
//     }
// };

class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        unordered_set<int> st(begin(nums), end(nums)); // store nums in a set

        // Handle head nodes that need removal
        while (head != NULL && st.count(head->val)) {
            head = head->next; // just move head forward
        }

        ListNode* curr = head;

        // Traverse and remove matching nodes
        while (curr != NULL && curr->next != NULL) {
            if (st.count(curr->next->val)) {
                curr->next = curr->next->next; // skip the node
            } else {
                curr = curr->next;
            }
        }

        return head;
    }
};
