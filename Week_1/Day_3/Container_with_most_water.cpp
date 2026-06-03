class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int r=n-1;
        int l=0;
        int maxw=0;
        while( l < r)
        {
            int width=r-l;
            int h= min(height[l],height[r]);
            int area=width*h;
            maxw=max(maxw,area);
             height[l] < height[r] ? l++:r--;
        }
       
        return maxw;
        
    }
};