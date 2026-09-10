class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int candidate = 0;
    int count = 0;

    // Find candidate
    for(int i = 0; i < nums.size(); i++) {

        if(count == 0) {
            candidate = nums[i];
        }

        if(nums[i] == candidate) {
            count++;
        }
        else {
            count--;
        }
    }

    // Verify candidate
    count = 0;

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == candidate) {
            count++;
        }
    }

    if(count > nums.size()/2) {
        return candidate;
    }

    return -1;
    }
};