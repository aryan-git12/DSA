class Solution {
public:
    void reverseArray(vector<int> &v,int start,int end){
        while(start<end){
            swap(v[start],v[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverseArray(nums,0,n-1);
        reverseArray(nums,0,k-1);
        reverseArray(nums,k,n-1);
    }
};