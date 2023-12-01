class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head->next == nullptr || head->next->next == nullptr){
            return head;
        }
        
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* even_head = even; // Save the starting point of the even nodes
        
        while(even != nullptr && even->next != nullptr) {
            odd->next = even->next; // Link odd nodes
            odd = odd->next;
            
            even->next = odd->next; // Link even nodes
            even = even->next;
        }
        
        odd->next = even_head; // Connect odd and even lists
        
        return head;
    }
};
