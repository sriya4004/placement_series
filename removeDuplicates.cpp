class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0;
        for(int fast = 1; fast < nums.size(); fast++){
            if(nums[fast]!=nums[slow]){
                slow++;
                nums[slow]=nums[fast];
            }
        }
        return slow+1;//represents the last index of a unique element, and array lengths are 1 more than the last index.
    }
};
