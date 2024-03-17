/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int x,i=0,c=0;
        struct ListNode*temp=head,*prev,*curr;
        
        if(head==NULL || head->next==NULL)
        return NULL;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        x=c-n;
        curr=head;
        if(x==0)
        head=head->next;
        else{
        while(i!=x){
            prev=curr;
            curr=curr->next;
            i++;
        }
        prev->next=curr->next;
        }
        return head;
        
    }
};