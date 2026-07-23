class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int max_diff = INT_MAX;
        int result_sum = nums[0] + nums[1] + nums[2];

        for(int i = 0; i < nums.size() - 2; i++) {

            int left = i + 1;
            int right = nums.size() - 1;

            while(left < right) {

                int curr_sum = nums[i] + nums[left] + nums[right];
                int diff = abs(curr_sum - target);

                if(diff < max_diff) {
                    max_diff = diff;
                    result_sum = curr_sum;
                }

                if(curr_sum == target) {
                    return curr_sum;
                }
                else if(curr_sum < target) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

        return result_sum;
    }
};