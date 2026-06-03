class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if(r*c != m*n )
        {
            return mat;
        }
        if(m==r && n==c)
        {
            return mat;
        }

        int old_pos=0;
        int new_pos=0;
       vector<vector <int>> ans(r,vector<int>(c));
       while(new_pos < r*c && old_pos < m*n)
       {
        ans[new_pos/c][new_pos%c] = mat[old_pos/n][old_pos%n];
        old_pos++;
        new_pos++;
       }
       return ans;
        
    }
};