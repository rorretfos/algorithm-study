class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.size() < needle.size())
            return -1;
        
        for (int j = 0; j <= haystack.size() - needle.size(); j++)
        {
            int i = 0;

            while (i < needle.size() && haystack[j + i] == needle[i])
            {
                i++;
            }

            if (i == needle.size())
                return j;
        }

        return -1;
    }
};