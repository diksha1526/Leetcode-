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
    ListNode* mergeNodes(ListNode* head) {
        struct ListNode*temp,*prev,*ans,*res;
       temp=head;
       res=new ListNode(-1);
       ans=res;
       int s=0;
       while(temp!=NULL){
        if(temp->val==0 && temp->next!=NULL){
            prev=temp->next;
            while(prev->val!=0){
            s+=prev->val;
            prev=prev->next;}
            res->val=s;
            res->next=prev->next;
            res=res->next;
            temp=prev;
            s=0;

        }
        else{
            temp=temp->next;
        }
        

       }
       
       return ans;
       
        
    }
};