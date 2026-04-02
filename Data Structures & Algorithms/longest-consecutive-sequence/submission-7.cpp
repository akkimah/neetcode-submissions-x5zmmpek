class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        if(nums.size()<1)
        return 0;
        int maxi =nums[0];
        int mini=nums[0];
        for (int i=0;i<n;i++)
        {
            maxi =max(maxi,nums[i]);
            mini=min(mini,nums[i]);
        }
        int sz1=maxi+1-mini;
        int arr[sz1];
        int size1= sizeof(arr) / sizeof(arr[0]);
        for(int i=0;i<size1;i++)
        {
            arr[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            arr[nums[i] - mini]++;
        }

        int ansm=0;
        int ans=0;
        for(int i=0;i<size1;i++)
        {
            if(arr[i]>0)
            {
                ans++;
            }
            else
            {
                ansm= max(ans, ansm);
                // cout << ansm << endl;
                ans=0;
            }
        }
        return max(ansm, ans);
    }
};
