class Solution 
{
public:
    void moveZeroes(vector<int>& nums) 
    {
        int nonZerosPos = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                nums[nonZerosPos] = nums[i];
                nonZerosPos++;
            }
        }

        for(int i = nonZerosPos; i < nums.size(); i++)
        {
            nums[i] = 0;
        }
    }
};