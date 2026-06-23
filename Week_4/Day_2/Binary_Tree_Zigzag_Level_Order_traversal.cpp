class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        queue<TreeNode *> q;
        if (root == NULL)
        {
            return ans;
        }
        bool lefttoRight = true;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            vector<int> level(size);
            for (int i = 0; i < size; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                int index = lefttoRight ? i : size - 1 - i;
                level[index] = node->val;
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            lefttoRight = !lefttoRight;
            ans.push_back(level);
        }
        return ans;
    }
};
