class Solution {
public:
    int length(ListNode* head){
        int count=0;
        while(head){
            head=head->next;
            count++;
        }
        return count;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        int n= length(head);
        if(head==NULL || n<k) return head;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next;
        int count=0;
        while(curr!=NULL && count<k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        if(next) head->next = reverseKGroup(next,k);
        return prev;
    }
};
