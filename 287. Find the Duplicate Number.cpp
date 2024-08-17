#include<bits/stdc++.h>

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int answer = -1;
        for(int i = 0; i < nums.size(); i++)
        {
            int index = abs(nums[i]);
            if(nums[index] < 0) 
            {
                answer = index;  
                break;
            }
            else    
            {
                nums[index] *= -1;
            }
        }
        return answer;
    }
};