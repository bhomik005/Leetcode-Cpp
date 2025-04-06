class Solution {
public:
    // O(n) time | O(1) space
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[k] != nums[i]) {
                nums[k + 1] = nums[i];
                k++;
            }
        }
        return k + 1;
    }
};
