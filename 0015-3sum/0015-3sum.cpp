class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int target = 0;
        set<vector<int>> ans;
        int n = nums.size();
        
        unordered_map<int,int> used;
        
        for(int i = 0;i<n-2;i++){
            int j = i+1;
            int k = n-1;
            while(j<k){
                int curr_sum = nums[i] + nums[j] + nums[k];
                if(curr_sum == target){
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.insert(temp);
                    k--;
                    continue;
                }
                if(curr_sum > target){
                    k--;
                }else{
                    j++;
                }
            }
        }
        vector<vector<int>> a;
        for(auto x:ans){
            a.push_back(x);
        }
        return a;
    }
};