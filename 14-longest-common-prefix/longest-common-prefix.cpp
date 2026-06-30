class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        string First = strs[0];
        int add = First.size();
        for(int i = 0; i < strs.size(); i++)
        { 
            int j = 0;
            while (j < First.size() && j < strs[i].size() 
                    && First[j] == strs[i][j])
            {
                j++;
            }
            add = min(add, j);
        }
        for (int k = 0; k < add; k++)
        {
            prefix += First[k];
        }
        return prefix;
        
    }
};