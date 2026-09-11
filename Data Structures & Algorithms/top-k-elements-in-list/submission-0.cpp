class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }

        vector<pair<int, int>> list;
        for (auto [num, count] : freq) {
            list.push_back({count, num});
        }

        sort(list.begin(), list.end());

        while (result.size() < k) {
            result.push_back(list.back().second);
            list.pop_back();
        }

        return result;
    }
};
