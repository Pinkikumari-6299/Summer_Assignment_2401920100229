
class Solution
{
public:
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        // Base case: if tree is empty
        if (root == nullptr)
            return false;

        // If it's a leaf node
        if (root->left == nullptr && root->right == nullptr)
        {
            return (targetSum == root->val);
        }

        // Recursively check left and right subtree
        int remainingSum = targetSum - root->val;

        return hasPathSum(root->left, remainingSum) ||
               hasPathSum(root->right, remainingSum);
    }
};