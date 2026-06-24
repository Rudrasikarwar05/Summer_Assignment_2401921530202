class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxi = INT_MIN;
        int n= nums.size();
        int prefix =0;
        for(int i=0;i<n;i++)
        {
            prefix=prefix+nums[i];
            maxi=max(prefix,maxi);

            if(prefix<0)
            prefix=0;
        }

        return maxi;
    }
};