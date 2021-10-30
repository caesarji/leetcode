#include<bits/stdc++.h>
using namespace std;

const int mod=1000000007;
const int MAX=100005;
 
int mul(int a, int b){
  return (a*b)%mod;
}

int mp1[MAX*4];

void solve(){
    // mp1.clear();
    // mp2.clear();
    int n;
    cin>>n;
    int a[n+1],b[n+1];
    for(int i=1;i<=n;i++){
      cin>>a[i];
      mp1[a[i]]=i;
    }
    for(int i=1;i<=n;i++){
      cin>>b[i];
      // mp2[b[i]]=i;
    }
    int tot=1;
    set<int>st;
    for(int i=1;i<=n;i++)st.insert(i);
    while(!st.empty()){
      vector<int>save;
      for(auto x:st){
          save.push_back(x);
          int y=mp1[b[x]];
          while(y!=x){
            save.push_back(y);
            y=mp1[b[y]];
          }
          break;
      }
      for(auto x:save){
        st.erase(x);
      }
      tot=mul(tot,2);
    }
    cout<<tot;
    cout<<endl;
}

int main(){
    
    
    int t; cin>>t;
    while(t--){
        solve();
        
    }

    
    


}

