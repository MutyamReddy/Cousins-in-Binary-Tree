class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
       queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            bool fx=false,fy=false;
            for(int i=0;i<s;i++){
                TreeNode* cur=q.front();q.pop();
                if(cur->val==x) fx=true;
                if(cur->val==y) fy=true;
                if(cur->left&&cur->right){
                    if((cur->left->val==x&&cur->right->val==y)||(cur->left->val==y&&cur->right->val==x)) return false;
                }
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            if(fx&&fy)
                return true;
        }
        return false;
    }
};
