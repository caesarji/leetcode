#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    long long arr[n];
    int cnt=0;
    long long sum=0;
    int flagg =true;
    int start;
    int finish;
    for(int i=0;i<n;i++) {cin>>arr[i]; 
    if(flagg && arr[i]!=0){ sum+=arr[i]; start=i; flagg=false;}
    if(arr[i]!=0) cnt++;}
    // cout<<sum<<" ";
    
    flagg =true;
    for(int i=n-1;i>=0;i--)
    {if(flagg && arr[i]!=0){  finish=i; flagg=false; break;}}
    // cout<<sum<<" ";

    for(int i=start+1;i<=finish;i++){
       sum+= abs(arr[i]-arr[i-1]); 
    //   cout<<sum<<" ";
        
    }
    sum+=arr[finish];

// cout<<sum<<endl;
    if(cnt==0){cout<<0<<endl;return;}
    if(cnt==1) {cout<<sum-arr[start]<<endl; return;}
    if(n>1){
        
        if(arr[0]>arr[1]) {sum-=arr[0]-arr[1]; arr[0]=arr[1];   }
        if(arr[n-1]>arr[n-2]) {sum-=arr[n-1]-arr[n-2]; arr[n-1]=arr[n-2];   }
        
        for(int i=1;i<n-1;i++) {
            long long temp[3];
            temp[0]=arr[i-1]; temp[1]=arr[i]; temp[2]=arr[i+1];
            // cout<<temp[0]<<" "<<temp[1]<<" "<<temp[2]<<endl;
            sort(temp,temp+3);
            if(arr[i]==temp[2])   {sum-=temp[2]-temp[1]; arr[i]=temp[1];}
            
            
        }
        
        
    }
    cout<<sum<<endl;
    
}

int main(){
    
    
    int t; cin>>t;
    while(t--){
        solve();
        
    }

    
    


}

