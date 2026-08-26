class Solution {
public:
    bool isMirror(TreeNode* left, TreeNode* right){
        // BOTH NULL
        if( right == nullptr &&  left == nullptr){
            return true;
        }
        // ONE NULL
        if(  right == nullptr ||  left == nullptr){
            return false;
        }
        // CHECK VALUE
        if( right->val != left->val){
            return false;
        }

        // Check mirror:
        // left's left  <-> right's right
        // left's right <-> right's left
        return isMirror(left->left, right->right) &&
               isMirror(left->right, right->left);

    }


    bool isSymmetric(TreeNode* root) {

        if( root == nullptr ){
            return true;
        }

        return isMirror(root->left , root->right);
        
    }
};