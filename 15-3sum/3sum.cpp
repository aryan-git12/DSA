class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
           int n = nums.size();

    vector<vector<int>> ans;

    // Step 1: Sort
    sort(nums.begin(), nums.end());

    // Step 2: Fix one element
    for (int i = 0; i < n - 2; i++) {

        // Skip duplicate fixed elements
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        // Step 3: Two pointers
        int left = i + 1;
        int right = n - 1;

        while (left < right) {

            int sum = nums[i] + nums[left] + nums[right];

            // Sum is zero
            if (sum == 0) {

                ans.push_back({
                    nums[i],
                    nums[left],
                    nums[right]
                });

                left++;
                right--;

                // Skip duplicate left values
                while (left < right &&
                       nums[left] == nums[left - 1]) {
                    left++;
                }

                // Skip duplicate right values
                while (left < right &&
                       nums[right] == nums[right + 1]) {
                    right--;
                }
            }

            // Sum is smaller than zero
            else if (sum < 0) {
                left++;
            }

            // Sum is greater than zero
            else {
                right--;
            }
        }
    }

    return ans;
} 
    
};