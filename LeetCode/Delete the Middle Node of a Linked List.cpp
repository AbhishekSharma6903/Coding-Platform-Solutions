
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next == nullptr) return NULL;
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* temp = NULL;
        while(fast && fast->next){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next= slow->next;
        return head;
    }
};
