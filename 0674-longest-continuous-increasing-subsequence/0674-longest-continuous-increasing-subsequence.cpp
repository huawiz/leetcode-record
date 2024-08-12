class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.empty()){return 0;}

        int maxima = 1;
        int cur = 1;
        for(int i = 1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                cur++;
                maxima = max(cur,maxima);
            }
            else{
                cur = 1;
            }
        }      
        return maxima;
    }
};