class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return mid; // 타겟을 찾았을 때
            } else if (nums[mid] < target) {
                left = mid + 1; // 오른쪽 반으로 범위 축소
            } else {
                right = mid - 1; // 왼쪽 반으로 범위 축소
            }
        }
        
        // 배열 안에 타겟이 없을 때, 삽입되어야 할 최적의 인덱스는 left입니다.
        return left;
    }
};