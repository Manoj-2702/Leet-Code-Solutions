/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root){
    if(root==NULL)
        return 0;
    int left_length=maxDepth(root->left);
    int right_length=maxDepth(root->right);
    if(left_length>right_length){
        return left_length+1;
    }
    else
        return right_length+1;
}
