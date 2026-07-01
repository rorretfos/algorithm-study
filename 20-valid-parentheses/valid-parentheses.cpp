class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> brackets = {
            {']','['}, {'}','{'}, {')','('}
            // key만 count할 수 있음
        };        

        stack<char> st;

        for(int i = 0; i < s.size(); i++)
        {
            if (brackets.count(s[i]))
            {
                if (st.empty() || st.top() != brackets[s[i]])
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
            else
            {
                
                st.push(s[i]);

            }
        }
        return st.empty();
            
    }
};