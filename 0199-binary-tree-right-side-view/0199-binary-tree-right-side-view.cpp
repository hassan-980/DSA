/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {

        vector<int> nums;

        // {Node,level}
        stack<pair<TreeNode*, int>> st;

        if(root == nullptr){
            return nums;
        }

        st.push({root,0});


        while(!st.empty()){

            auto [node,level] = st.top();
            st.pop();

            if(level == nums.size()){
                nums.push_back(node->val);
            }
            // push left node bcoz stack is LIFO
            if(node->left){
                st.push({node->left,level+1});
            }
            if(node->right){
                st.push({node->right,level+1});
            }


        }
        return nums;
        
    }
};