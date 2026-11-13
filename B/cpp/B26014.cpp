// https://leetcode.com/problems/sqrtx/description/

class Solution {
public:
    int mySqrt(int x) {
        if (x == 1 || x == 2) {
            return 1;
        }
        for (long long i = 0; i < x; i++) {
            if (i * i > x) {
                return i - 1;
                break;
            }
        }

        return 0;
    }
};

