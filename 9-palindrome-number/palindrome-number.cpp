class Solution {
public:
    bool isPalindrome(int x) {
        // string으로 변환 후 for문
        // string s = to_string(x);
        // string reverse;
        // for( int i = s.size() - 1; i >= 0 ; i-- )
        // {
        //     reverse += s[i]; 
        // }
        // if(reverse == s)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }

        // Solve it without converting the integer to a string
        // 음수, 0을 제외한 10의 배수면 제외

        int reverse = 0;

        if ( x < 0 )
        {
            return false;
        }
        if ( x % 10 == 0 && x != 0)
        {
            return false;
        }

        while ( x > reverse )
        {
            reverse = x % 10 + reverse * 10;
            x /= 10;
        }

        return ( x == reverse || x == reverse / 10 );
    }
};