class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ptr1 = list1;
        ListNode* ptr2 = list2;
        ListNode* dummy = new ListNode();
        ListNode* ptr3 = dummy;
        while(ptr1 && ptr2){
            if(ptr1->val < ptr2->val){
                ptr3->next= ptr1;
                ptr1 = ptr1->next;
            }
            else{
                ptr3->next = ptr2;
                ptr2 = ptr2->next;
            }
            ptr3 = ptr3->next;
        }
        while(ptr1){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
            ptr3 = ptr3->next;
        }
        while(ptr2){
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
            ptr3 = ptr3->next;
        }
        return dummy->next;
    }
};
