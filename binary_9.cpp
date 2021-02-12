vector<int> leftView(Node *root)
{
    vector<int>v;
    if(!root)
    {
        return v;
    }
        
        queue<Node*>q;
        q.push(root);
        int count,flag=0;
        while(!q.empty())
        {
            count=q.size();
            while(count>0)
            { 
                root=q.front();
                q.pop();
                if(flag==0)
                {
                    v.push_back(root->data);
                    flag++;
                }
                if(root->left!=NULL)
                {
                    q.push(root->left);
                }
                if(root->right!=NULL)
                {
                    q.push(root->right);
                }
                count--;
        
            }
            flag=0;
        }
        return v;
}

