#include<bits/stdc++.h>
using namespace std;

void solve(){
    // cout<<"here";
    int n,m; cin>>n>>m;
    char mat[n+1][m+1];
    vector<int >red;
    vector<int >white;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>mat[i][j];
            if(mat[i][j]=='R') red.push_back(i+j);
            if(mat[i][j]=='W') white.push_back(i+j);
        }
    }
    // cout<<"here";
    //  for(int i=0;i<red.size();i++) cout<<red[i]<<" "; cout<<endl;
    //  for(int i=0;i<white.size();i++) cout<<white[i]<<" "; cout<<endl;
    
        // cout<<"here";
        

    bool flag=false;
    for(int i=0;i<red.size();i++){
        for(int j=0;j<white.size();j++){
            if(  abs(red[i]-white[j])%2==0   )  flag=true;
        }
    }
    for(int i=0;i<red.size();i++){
        for(int j=i+1;j<red.size();j++){
            if(  abs(red[i]-red[j])%2!=0   )  flag=true;
        }
    }
    for(int i=0;i<white.size();i++){
        for(int j=i+1;j<white.size();j++){
            if(  abs(white[i]-white[j])%2!=0   )  flag=true;
        }
    }
    
    char od='c';
    char ev='c';
    bool flags=false;
    if(flag){
        cout<<"NO"<<endl; return;
    }
    else{
        for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if( (mat[i][j]=='R' && ( i+j)%2!=0)  || (mat[i][j]=='W'  &&  ( i+j)%2==0) )     {od='R'; ev='W'; flags=true; break;}
            else if( (mat[i][j]=='W' && ( i+j)%2!=0)  || (mat[i][j]=='R'  &&  ( i+j)%2==0) ) { ev='R';od='W';flags=true; break;}
        }
        if(flags) break;
        }
        
        if(od=='R' || (od=='c'&& ev=='c')){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    if((i+j)%2!=0) mat[i][j]='R';
                    else mat[i][j]='W';
                    }
            }   
        }
        if(ev=='R'){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    if((i+j)%2!=0) mat[i][j]='W';
                    else mat[i][j]='R';
                    }
            }  
        }
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<mat[i][j];
        }cout<<endl;
        }
        
}
}

int main(){
    
    
    int t; cin>>t;
    while(t--){
        solve();
        
    }

    
    


}

