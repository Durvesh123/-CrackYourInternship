class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Sum 
        int n = nums.size();
        int sum1 = n*(n + 1) / 2;
        int sum2 = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum2 += nums[i];
        }
        return sum1 - sum2;

        //XOR
        int n = nums.size();
        for(int i = 0; i < nums.size(); i++)
        {
            n = n ^ i ^ nums[i];
        }
        return n;
    }
};