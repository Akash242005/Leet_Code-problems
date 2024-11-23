class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0;
        int left = 0;
        int bot = matrix.size()-1;
        int right = matrix[0].size()-1;
        vector<int> ans;
        int d = 1;
        while(top <=bot && left<=right)
        {
            if(d==1)
            {
                for(int i=left;i<=right;i++)
                {
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }
            if(d==2)
            {
                for(int i=top;i<=bot;i++)
                {
                    ans.push_back(matrix[i][right]);
                }
                right--;
            }
            if(d==3)
            {
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(matrix[bot][i]);
                }
                bot--;
            }
            if(d==4)
            {
                for(int i=bot;i>=top;i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            d++;
            if(d==5)
            {
                d=1;
            }
        }
        return ans;
    }
};
