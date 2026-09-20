class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        }
        int required;
        for (int i = 0; i < nums.size(); i++) {
            required = target - nums[i];
            auto it=mp.find(required);
            if(it!=mp.end() && it->second!=i){
                return {i,it->second};
            }
        }
    }
};
