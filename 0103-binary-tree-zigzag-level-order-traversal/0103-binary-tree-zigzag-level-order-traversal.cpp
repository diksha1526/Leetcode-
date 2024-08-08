/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL){
            return ans;
        }
        q.push(root);
        
        int j=0;
        while(!q.empty()){
            j+=1;
            int l=q.size();
            vector<int>v;
            // TreeNode* temp=q.front();
            // q.pop();
            for(int i=0;i<l;i++){
                 TreeNode* temp=q.front();
            q.pop();
            v.push_back(temp->val);
            if(temp->left!=NULL){
                q.push(temp->left);
                
                
            }
            if(temp->right!=NULL){
                q.push(temp->right);
                
            }}
            if(!v.empty()){
            if(j%2!=0){
                ans.push_back(v);
            }
            else{
                reverse(v.begin(),v.end());
                ans.push_back(v);
            }}
            }
            return ans;
            


        
        
    }
};