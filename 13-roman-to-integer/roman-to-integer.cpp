class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> RomanValue = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int final = 0;

        for(int i = 0; i < s.size(); i++ )
        {
            int RV = RomanValue[s[i]];

            if(i + 1 < s.size() && RV < RomanValue[s[i+1]])
            {                
                final -= RV;
            }
            else
            {
                final += RV;
            }

        }
        return final;
    }
};