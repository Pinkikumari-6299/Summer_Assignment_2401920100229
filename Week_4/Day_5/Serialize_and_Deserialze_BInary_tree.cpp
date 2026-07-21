class Codec {
public:

    void solve(TreeNode* root, string &ans) {
        if (root == NULL) {
            ans += "#,";
            return;
        }

        ans += to_string(root->val) + ",";
        solve(root->left, ans);
        solve(root->right, ans);
    }

    string serialize(TreeNode* root) {
        string ans = "";
        solve(root, ans);
        return ans;
    }

    TreeNode* makeTree(vector<string> &v, int &i) {
        if (v[i] == "#") {
            i++;
            return NULL;
        }

        TreeNode* root = new TreeNode(stoi(v[i]));
        i++;

        root->left = makeTree(v, i);
        root->right = makeTree(v, i);

        return root;
    }

    TreeNode* deserialize(string data) {
        vector<string> v;
        string s = "";

        for (char c : data) {
            if (c == ',') {
                v.push_back(s);
                s = "";
            } else {
                s += c;
            }
        }

        int i = 0;
        return makeTree(v, i);
    }
};