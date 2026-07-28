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
    private :
    int cntNode(TreeNode* node , long long currSum){
        if(!node) 
        return 0;
        int total = 0;
        if(node->val == currSum){
            total++;
        }
        total += cntNode(node->left, currSum-node->val);
        total += cntNode(node->right, currSum-node->val);
        return total;
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        if(!root) 
        return 0;
        int pathsFromRoot = cntNode(root,targetSum);
        int pathsFromLeft = pathSum(root->left , targetSum);
        int pathsFromRight = pathSum(root->right, targetSum);

        return pathsFromRoot + pathsFromLeft + pathsFromRight;
    }
};