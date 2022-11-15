class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL) return NULL;
        ListNode* temp = head;
        while(n--){
            temp = temp->next;
        }
        ListNode* ptr = head;
        if(!temp) return head->next; // if there are 2 nodes and we have to delete head, i.e. 2nd from last//

        while(temp->next!=NULL){
            temp = temp->next;
            ptr = ptr->next;
        }
        ListNode* todelete = ptr->next;
        ptr->next = ptr->next->next;
        delete(todelete);
        return head;
    }
};
