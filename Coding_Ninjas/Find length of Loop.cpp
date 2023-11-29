int lengthOfLoop(Node *head) {
    if(head==NULL || head->next==NULL){
        return 0;
    }
    Node *fast = head;
    Node *slow = head;
    Node *entry = head;

    int cnt =1;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast){
            while(slow!=entry){
                slow = slow->next;
                entry = entry->next;
            }
            Node *locator = entry;
            while(locator->next!=entry){
                cnt++;
                locator = locator->next;
            }
            return cnt;
        }
    }
    return 0;
}
