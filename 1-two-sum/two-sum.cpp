class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

    unordered_map<int, int> mp;

    for(int i = 0; i < arr.size(); i++) {

        int required = target - arr[i];

        if(mp.find(required) != mp.end()) {
            return {mp[required], i};
        }

        mp[arr[i]] = i;
    }

    return {};
}
};