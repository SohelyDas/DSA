class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum=sum+nums[i];}
            int left=0;
        for(i=0; i<nums.size(); i++){
            int right=sum-nums[i]-left;
            if(left==right)
            return i;

            left=left+nums[i];
        }
        return -1;
    }
};