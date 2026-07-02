class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int write = 0;
        for(int i = 0; i < size; i++)
        {
            if(i+1 < size && nums[i] == nums[i+1])
            {
                continue;
            }
            else
            {
                nums[write] = nums[i];
                write ++;
            }
        }
        return write;
        
    }
};