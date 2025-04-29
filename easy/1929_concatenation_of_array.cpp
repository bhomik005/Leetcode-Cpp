class Solution {
    public:
        vector<int> getConcatenation(vector<int>& nums) {
            // O(n) time | O(n) space
            int size = nums.size();
            // create a vector of size 2 * n
            vector<int> ans(2 * size, 0);
            for(int i = 0; i < size; ++i) {
                ans[i] = nums[i];
                ans[size + i] = nums[i];
            }
            return ans;
        }
    };