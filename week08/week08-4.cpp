class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int N=nums.size();
        vector<int> ans(N);
        ans[0] =nums[0];
        for(int i=1;i<N;i++){
            ans[i]=ans[i-1]+nums[i];
        }
        return ans;
    }
};
