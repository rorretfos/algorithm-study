class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // 세 개의 포인터 설정
        int p1 = m - 1;      // nums1의 실제 데이터 중 가장 큰 값 위치
        int p2 = n - 1;      // nums2의 가장 큰 값 위치
        int p = m + n - 1;   // nums1의 가장 맨 뒤 공간 위치

        // 두 배열에 비교할 원소가 남아있는 동안 반복
        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1];
                p1--;
            } else {
                nums1[p] = nums2[p2];
                p2--;
            }
            p--;
        }

        // nums2에 원소가 남아있는 경우 (nums1의 원소가 먼저 다 소진되었을 때)
        // nums1에 남은 것들은 이미 정렬되어 있으므로 nums2만 옮겨주면 됩니다.
        while (p2 >= 0) {
            nums1[p] = nums2[p2];
            p2--;
            p--;
        }
    }
};