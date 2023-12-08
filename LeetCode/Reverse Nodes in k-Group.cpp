class Solution {
public:

ListNode *reverseLL(ListNode *head){
    ListNode *prev = NULL;
    ListNode *next = NULL;
    ListNode *curr = head;
    while(curr){
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr= next;
    }
    return curr;
}

ListNode *Finding_KthNode(ListNode *temp, int k){
    k=k-1;
    while(temp && k>0){
        temp = temp->next;
        k--;
    }
    return temp;
}

    ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* temp = head;
    ListNode* prev = NULL;
    while(temp!=NULL){
    ListNode* KthNode = Finding_KthNode(temp, k );
    if(KthNode == NULL){
        prev->next = temp;
        break;
    }
    ListNode* newNode = KthNode->next;
    KthNode->next = NULL;
    reverseLL(temp);
    if(head == temp){
        head = KthNode;
    }
    else{
        prev->next  = KthNode;
    }
    prev = temp; // to store prevPointer
    temp = newNode;
    }
    return head;

    }
};
