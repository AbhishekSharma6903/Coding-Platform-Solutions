class Solution {
public:

    ListNode* rotateRight(ListNode* head, int k) {
    if (head == NULL || head->next == NULL) return head;

    int count = 1; // Start count from 1 as head is already counted
    ListNode* temp = head;
    while (temp->next) {
        count++;
        temp = temp->next;
    }
    temp->next = head; // Connect the last node to the head to make it circular

    k = k % count;
    for (int i = 0; i < count - k; i++) {
        temp = temp->next;
    }
    head = temp->next;
    temp->next = NULL; // Break the circular connection
    return head;
}
};
