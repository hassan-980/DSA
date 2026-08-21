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
    bool isSameTree(TreeNode* p, TreeNode* q) {


       // Base case: both nodes are null (same empty subtree)
        if (p == nullptr && q == nullptr) {
            return true;
        }

        // If one node is null and the other is not, trees are different
        if (p == nullptr || q == nullptr) {
            return false;
        }

        // If values at current nodes don't match, trees are different
        if (p->val != q->val) {
            return false;
        }

        // Recursively check if left subtrees and right subtrees are identical
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        
    }
};