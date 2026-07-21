class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty()) return "";
        int start = 0, maxlength = 0;

        auto track = [&](int left, int right){
            while (left >= 0 && right < s.length() && s[left] == s[right])
            {
                left--;
                right++;
            }
            int len = right - left - 1;
            if (len > maxlength)
            {
                maxlength = len;
                start = left + 1;
            }
        };

        for(int i = 0; i < s.length(); i++)
        {
            track(i,i);
            track(i, i+1);
        }

        return s.substr(start, maxlength);        
    }
};