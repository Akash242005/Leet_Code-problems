class Solution {
public:
    bool isSubsequence(string s, string t) {
        int low = 0;
        int low1 = 0;
        while(low<s.size() && low1<t.size())
        {
            if(s[low] == t[low1])
            {
                low1++;
                low++;
            }
            else
            {
                low1++;
            }
        }
        if(low==(s.size()))
        {
            return true;
        }
        return false;
    }
};
