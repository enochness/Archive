// https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int total = nums.size();

        for (int i = 0; i < total; i++) {
            for (int j = i+1; j < total; j++) {
                int a = nums[i];
                int b = nums[j];
                int c = a + b;

                if (c == target) {
                    return {i, j};
                }
            }
        }

        return {};
    }
};

