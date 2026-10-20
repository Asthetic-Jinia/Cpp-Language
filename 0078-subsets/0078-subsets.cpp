class Solution {
public:
    void solve(int index,vector<int>& nums,vector<vector<int>>& ans,vector<int>& temp,int n){
        if(index==n){
            ans.push_back(temp);
            return;
        }
        //pick the element
        temp.push_back(nums[index]);
        solve(index+1,nums,ans,temp,n);
        // not pick the element
        temp.pop_back();
        solve(index+1,nums,ans,temp,n);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        solve(0,nums,ans,temp,nums.size());
        return ans;
    }
};