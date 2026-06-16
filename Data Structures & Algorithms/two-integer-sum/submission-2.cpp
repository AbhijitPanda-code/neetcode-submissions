class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        for(int i = 0;i<nums.size();i++)
        {
            auto it = hash.find(target-nums[i]);
            if(it!=hash.end() && i!=it->second)
            {
            int a = min(i,it->second),b = max(i,it->second);
            return{a,b};
            }
            hash[nums[i]] = i;
        }
    }
};
