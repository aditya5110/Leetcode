class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> u;
        int n = nums.size();
        vector<int> ans;
        for(int i = 0;i<n;i++){
            if( u.find(target-nums[i]) != u.end() ){
                ans.push_back(i);
                ans.push_back(u[target-nums[i]]);
            }
            u[nums[i]] = i;
        }
        return ans;
    }
};