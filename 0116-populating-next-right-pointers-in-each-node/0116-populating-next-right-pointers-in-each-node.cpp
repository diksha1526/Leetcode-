/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL){
            return NULL;
        }
        Node*  temp=root;
        temp->next=NULL;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            
            int l=q.size();
            vector<Node*>v;
            while(l--){
            Node* prev=q.front();
            q.pop();
            if(prev->left){
                q.push(prev->left);
                v.push_back(prev->left);
               
            }
            if(prev->right){
                q.push(prev->right);
                v.push_back(prev->right);
                
            }
            }
            if(!v.empty()){
            for(int i=0;i<v.size()-1;i++){
                Node* temp1=v[i];
                Node* temp2=v[i+1];
                temp1->next=temp2;
            }
            Node* temp3=v[v.size()-1];
            temp3->next=NULL;}
        }
        return root;
        
    }
};