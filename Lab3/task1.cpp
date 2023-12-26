#include "iostream"

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr){}
};
class Solution {
public:
    int max_sum;
    int dfs(TreeNode* root){
        if(root == 0) return 0;
        int LeftRoot=dfs(root->left);
        int RightRoot=dfs(root->right);
        int sum=root->val+LeftRoot+RightRoot;
        max_sum=max(max_sum,sum);
        return root->val+max(LeftRoot,RightRoot);
    }
    int Path(TreeNode* root) {
        dfs(root);
        return max_sum;
    }
};
