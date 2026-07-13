class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last1 = m - 1;
        int last2 = n - 1;
        int last3 = m + n - 1;

        while (last1 >= 0 && last2 >= 0)
        {
            if(nums1[last1] > nums2[last2])
            {
                nums1[last3] = nums1[last1];
                last1--;
            }
            else
            {
                nums1[last3] = nums2[last2];
                last2--;
            }          
            last3--;
        }
        while (last2 >= 0)
        {
            nums1[last3] = nums2[last2];
            last2--;
            last3--;
        }
    }
};