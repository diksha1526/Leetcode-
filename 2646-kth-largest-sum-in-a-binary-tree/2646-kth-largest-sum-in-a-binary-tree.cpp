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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        priority_queue<long>pq;
        TreeNode* temp;
        long long sum=0;
        k-=1;
        queue<TreeNode*>q;
        q.push(root);
        pq.push(root->val);
        while(!q.empty()){
            int l=q.size();
            while(l--){
            temp=q.front();
            q.pop();
            if(temp->left){
                q.push(temp->left);
                sum+=temp->left->val;
            }
            if(temp->right){
                q.push(temp->right);
                sum+=temp->right->val;
            }}
            pq.push(sum);
            sum=0;
            
        }
        while(k>0){
            pq.pop();
            k--;
        }
        if(pq.top()==0){
            return -1;
        }
        return pq.top();
        
    }
};