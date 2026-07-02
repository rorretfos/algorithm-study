class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        // 결과 리스트의 시작을 위한 더미 노드
        ListNode dummy(0);

        // 항상 결과 리스트의 마지막 노드를 가리킴
        ListNode* tail = &dummy;

        while (list1 != nullptr && list2 != nullptr) {

            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            }
            else {
                tail->next = list2;
                list2 = list2->next;
            }

            tail = tail->next;
        }

        // 남은 리스트를 그대로 연결
        if (list1 != nullptr)
            tail->next = list1;
        else
            tail->next = list2;

        return dummy.next;
    }
};