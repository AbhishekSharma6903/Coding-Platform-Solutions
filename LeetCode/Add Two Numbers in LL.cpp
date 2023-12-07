class Solution {
public:
    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {
        ListNode* l1 = head1;
        ListNode* l2 = head2;
        ListNode* dn = new ListNode(-1);
        ListNode* curr = dn;
        int carry=0;
        while(l1 || l2){
            int sum = carry;
            if(l1) sum = sum + l1->val;
            if(l2) sum = sum + l2->val;
            ListNode * newNode = new ListNode(sum%10);
            carry = sum/10;
            curr->next = newNode;
            curr = curr->next ;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        if(carry){
            ListNode *newNode = new ListNode(carry);
            curr->next = newNode ;
        }
        return dn->next;
    }
};
