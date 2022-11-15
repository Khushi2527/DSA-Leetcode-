/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* d1 = headA;
        ListNode* d2 = headB;
        
        while(d1!=d2){
            d1==NULL ? d1=headB : d1= d1->next; 
            d2==NULL ? d2=headA : d2= d2->next;
        }
        if(d1==NULL || d2==NULL) return NULL;
        return d1;
    }
};
