class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *first = headA;
        ListNode *second = headB;

        while(first!=second){
            if(first==NULL){
                first = headB;
            }
            else{
                first = first->next;
            }
            if(second == NULL){
                second = headA;
            }
            else{
                second = second->next;
            }
        }
        return first;
    }
};
