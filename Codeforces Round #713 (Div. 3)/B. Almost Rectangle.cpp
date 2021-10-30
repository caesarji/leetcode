#include<bits/stdc++.h>
using namespace std;
// #define int long long

const int mod=1000000007;
const int MAX=100005;
 
int mul(int a, int b){
  return (a*b)%mod;
}

// int mp1[MAX*4];

void solve(){
    int n; cin>>n;
    char mat[n+1][n+1];
    int firstX,firstY;
    bool first=true;
    int secX,secY;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>mat[i][j];
            if(mat[i][j]=='*' && first) {firstX=i; firstY=j; first=false;}
            if(mat[i][j]=='*') {secX=i; secY=j;}
        }
    }
    
    if(firstX==secX ) {
        if(firstX>=2) { mat[firstX-1][firstY]='*';      mat[secX-1][secY]='*';}
        else { mat[firstX+1][firstY]='*';      mat[secX+1][secY]='*';}
    }
    else if(firstY==secY){
        if(firstY>=2) { mat[firstX][firstY-1]='*';      mat[secX][secY-1]='*';}
        else { mat[firstX][firstY+1]='*';      mat[secX][secY +1]='*';}
    }
    else {mat[firstX][secY]='*'; mat[secX][firstY]='*';}
    
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<mat[i][j];
            
        } cout<<endl;
    }
    // cout<<endl;
}

int main(){
    
    
    int t; cin>>t;
    while(t--){
        solve();
        
    }

    
    
return 0;

}

