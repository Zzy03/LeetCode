class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
		vector<int> nums2;
		int n = nums.size();
		int left = 0;
		int right = nums.size()-1;
		nums2 = nums;
		sort(nums.begin(), nums.end());
		for(left=0; left<n; ++left){
			if(nums[left]!=nums2[left]) break;
		}
		for(right=nums.size()-1; right>=left; --right){
			if(nums[right]!=nums2[right]) break;
		}
		return (right-left+1);
    }
};