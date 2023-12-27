class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;

        ListNode* res = NULL;
        ListNode* curr = NULL;

        if (l1->val < l2->val) {
            res = l1;
            curr = l1;
            l1 = l1->next;
        } else {
            res = l2;
            curr = l2;
            l2 = l2->next;
        }

        while (l1 != NULL && l2 != NULL) {
            if (l1->val < l2->val) {
                curr->next = l1;
                curr = l1;
                l1 = l1->next;
            } else {
                curr->next = l2;
                curr = l2;
                l2 = l2->next;
            }
        }

        if (l1 != NULL) {
            curr->next = l1;
        } else {
            curr->next = l2;
        }

        return res;
    }
};
