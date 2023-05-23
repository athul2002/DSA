class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1;
        int el=nums[0];
        for(int i=1;i<nums.size()-1;i++)
        {
            
            if(nums[i]==el)
            {
                count++;
            }
            else
            {
                // el=nums[i];
                count--;
            }
            if(count==0 )
            {
                el=nums[i+1];
                count=1;
                i++;
            }
        }

        if(nums[nums.size()-1]==el)
        count++;
        else
        {
            count--;
        }

        if(count>0)
        return el;
        else return -1;
    }
};