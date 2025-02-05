class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        if (x == 0) {
            return true;
        }

        long long rev = 0;
        int org = x;

        while (x > 0) {
            int r = x % 10;
            rev = rev * 10 + r;
            x /= 10;
        }

        return rev == org;
    }
};
