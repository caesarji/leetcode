struct cou{
  int f,s;
};

// int ans=0;
cou dfs(Node* r,int &ans){
  if(!r) return {0,0};
  cou t=dfs(r->left,ans);
  cou tt=dfs(r->right,ans);
  if(r->right){
    if(r->right->data>r->data){
      tt.f=0;
    }
    else if(r->right->data<r->data){
      tt.s=0;
    }
    else tt={0,0};
  }
  if(r->left){
    if(r->left->data>r->data){
      t.f=0;
    }
    else if(r->left->data<r->data){
      t.s=0;
    }
    else t={0,0};
  }
  ans=max({ans,t.f+1+tt.s,1+t.s+tt.f});
  cou res={max(tt.f,t.f)+1,max(tt.s,t.s)+1};
  return res;
}
int longest_strictly_increasing_path(Node* root) {
    int ans=0;
  dfs(root,ans); //enter root node
//   cout<<ans<<endl;
    return ans;
}