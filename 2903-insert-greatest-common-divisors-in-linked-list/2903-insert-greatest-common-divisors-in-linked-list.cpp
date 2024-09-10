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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp,*temp1,*root;
        temp=root=head;
        while(root->next!=NULL){
            int x=__gcd(root->val,root->next->val);
            ListNode* prev = new ListNode(0);
            
            prev->val=x;
            temp1=root->next;
            root->next=prev;
            prev->next=temp1;
            root=temp1;
        }
        return head;
        
    }
};