class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> nums_map;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            int difference = target - nums[i];
            if(nums_map.find(difference) != nums_map.end()){
                result.push_back(nums_map[difference]);
                result.push_back(i);
                return result;
            }
            nums_map[nums[i]] = i;
        }
    }
};