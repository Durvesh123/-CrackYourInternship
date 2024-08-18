#include<bits/stdc++.h>
#include<vector>
#include<set>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //TWO POINTER
        int i = 0;
        for(int j = 1; j < nums.size(); j++)
        {
            if(nums[j] != nums[i])
            {
                i++;
                nums[i] = nums[j];
            }
            
        }
        return i+1;

        //SET
        set<int> st;
        for(int i = 0; i < nums.size(); i++)
        {
            st.insert(nums[i]);
        }
        int index = 0;
        for(auto it:st)
        {
            nums[index] = it;
            index++;
        }
        return st.size();
    }
};