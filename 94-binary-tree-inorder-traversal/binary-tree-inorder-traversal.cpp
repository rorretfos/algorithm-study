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
    
    vector<int> result;
    vector<int> inorderTraversal(TreeNode* root) {
        traverse(root);
        return result;        
    }

    void traverse(TreeNode* current)
    {
        if(current == nullptr) return;

        traverse(current -> left);
        result.push_back(current -> val);
        traverse(current -> right);
    }
};