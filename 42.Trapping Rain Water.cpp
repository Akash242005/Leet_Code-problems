class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        vector<int> left(size);
        vector<int> right(size);
        int max_val = INT_MIN;
        for(int i=0;i<size;i++)
        {
            max_val = max(max_val,height[i]);
            left[i]=max_val;
        }
        max_val = INT_MIN;
        for(int i=size-1;i>=0;i--)
        {
            max_val = max(max_val,height[i]);
            right[i] = max_val;
        }
        int ans = 0;
        for(int i=0;i<size;i++)
        {
            ans = ans + min(left[i],right[i])-height[i];
        }
        return ans;
    }
};
