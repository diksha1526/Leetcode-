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
    void reorderList(ListNode* head) {
        ListNode* temp,*prev,*curr;
        temp=head;
        vector<ListNode*>st;
        while(temp!=NULL){
            st.push_back(temp);
            temp=temp->next;
        }
        int i=0,j=st.size()-1;
    
        while(i<j){
            st[i]->next=st[j];
            i++;
            if(i==j){
                break;
            }
            st[j]->next=st[i];
            j--;

        }
        st[i]->next=NULL;
    }
        
};