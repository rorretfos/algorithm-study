class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string First = strs[0];

        for(int i = 0; i < strs.size(); i++)
        { 
            int j = 0;
            while (j < First.size() && j < strs[i].size() 
                    && First[j] == strs[i][j])
            {
                j++;
            }
            First = First.substr(0,j);

            
            if (First.empty())
                return "";
        }
        return First;
    }
};

// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         string First = strs[0];

//         for (int i = 1; i < strs.size(); i++)
//         {
//             int j = 0;

//             while (j < First.size() &&
//                    j < strs[i].size() &&
//                    First[j] == strs[i][j])
//             {
//                 j++;
//             }

//             // 공통 접두사만 남긴다.
//             First = First.substr(0, j);

//             // 더 이상 공통 접두사가 없으면 끝
//             if (First.empty())
//                 return "";
//         }

//         return First;
//     }
// };