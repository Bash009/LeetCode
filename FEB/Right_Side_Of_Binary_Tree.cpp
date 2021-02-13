class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root==nullptr)
            return ans;
        
        queue<TreeNode*>q;
        
        q.push(root);
        q.push(nullptr);
        
        TreeNode* curr;
        
        while(!q.empty()){
            if(q.front()!=nullptr){ 
                
                curr=q.front(); 
                
                if(curr->left) q.push(curr->left);              
                if(curr->right) q.push(curr->right);
                
                q.pop(); 
            }
            else{ 
                
                
                ans.push_back(curr->val); 
                
                q.pop(); 
                
    
                if(!q.empty()) q.push(nullptr);
            }
        }
        
        return ans;
    }
        
  
};