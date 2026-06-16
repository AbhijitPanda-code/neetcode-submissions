class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int last = nums.size()-1,first=0;
        while(first<=last){
            if(nums[first]==val && nums[last]!=val)
            {
            swap(nums[first],nums[last]);
            nums.pop_back();
            last--;
            first++;
            }
            else if(nums[first]==val && nums[last]==val)
            {
                nums.pop_back();
                last--;
            }
            else
            first++;
        }
        return nums.size();
    }
};