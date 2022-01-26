class Solution {
public:
    vector<int> v;
    void inorder(struct TreeNode* root){
        if(root == NULL){
            return;
        }
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right); 
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        inorder(root1);
        inorder(root2);
        sort(v.begin(), v.end());
        return v;
    }
};
