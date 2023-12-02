class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode* temp = head;
      int size = 0;
      while(temp){
          size++;
          temp=temp->next;
      }  
      int pos = size-n;
      if(pos==0) return head->next;
      temp = head;
      while(pos>1){
          pos--;
          temp= temp->next;
      }
      ListNode *del = temp->next;
      temp->next = temp->next->next;
      del->next = nullptr;
      return head;

    }
};
