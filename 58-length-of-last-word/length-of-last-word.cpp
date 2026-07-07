class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int size = s.size();
        for (int i = size - 1; i >= 0 ; i--)
        {
            if (s[i] != ' ')
            {
                count++;
            }
            else if (s[i] == ' ' && count != 0)
            {
                return count;
            }
        }
        return count;
        
    }
};