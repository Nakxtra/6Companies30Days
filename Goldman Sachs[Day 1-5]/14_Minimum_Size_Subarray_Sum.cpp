class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int l=0, r=-1, sum=0, len, n=nums.size();
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            if(sum>=target)
            {
                r=i;
                len = r-l+1;
                break;
            }
        }
        if(r==-1)
            return 0;
        
        while(l<=r && r<n-1)
        {
            while(sum>=target)
            {
                sum-=nums[l];
                l++;
            }
            len = min(len, r-l+2);
            r++;
            sum+=nums[r];
        }
        
        while(sum>=target)
            {
                sum-=nums[l];
                l++;
            }
        len = min(len, r-l+2);
        
        return len;
    }
};