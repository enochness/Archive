// https://leetcode.com/problems/palindrome-number/description/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else if (x == 0) {
            return true;
        } else {
            int len = floor(log10(x)) + 1;
            int counter = 0;
            for (int i = 0; i < floor(len/2); i++) {
                int n = i + 1;
                int a = (int)floor(x / pow(10, n-1)) % 10;
                int b = (int)floor(x / pow(10, len - n)) % 10;
                if (a == b) {
                    counter++;
                }
            }
            if (counter == floor(len/2)) {
                return true;
            }
        }
        
        return 0;
    }
};

