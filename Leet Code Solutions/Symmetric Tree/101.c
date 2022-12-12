/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isSymmetric0(struct TreeNode* left,struct TreeNode* right){
    if(left==NULL && right==NULL){
        return true;
    }
    if(left && right && (left->val == right->val) && (isSymmetric0(left->left,right->right)) && isSymmetric0(left->right,right->left)){
        return true;
    }
    else
        return false;
}

bool isSymmetric(struct TreeNode* root){
    if(root==NULL)
        return true;
    return isSymmetric0(root->left,root->right);
}
