class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cur = 0;
        int maxlen = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==1){
                cur++;
            }
            else{
                cur = 0;
            }
            maxlen = max(maxlen,cur);
        }
        return maxlen;
    }
};