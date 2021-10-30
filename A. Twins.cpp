#include "bits/stdc++.h"
using namespace std;
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define vi                vector<int>

template<typename T1,typename T2>istream& operator>>(istream& in,pair<T1,T2> &a){in>>a.fr>>a.sc;return in;}
template<typename T1,typename T2>ostream& operator<<(ostream& out,pair<T1,T2> a){out<<a.fr<<" "<<a.sc;return out;}
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;

const int N=2005;

int a[N];
int pf[N];
// int fact(int n);
 
int fact(int n){int res = 1;for (int i = 2; i <= n; i++)res = res * i;return res;}
int nCr(int n, int r){return (fact(n) / (fact(r) * fact(n - r)));}


void solve(){
   int n; cin>>n; vi v(n); int sum=0;
   rep(i,0,n){ cin>>v[i]; sum+=v[i];}
   sort(v.begin(),v.end(),greater<int>()); int summ=0; int cnt=0;
   rep(i,0,n)  {summ+=v[i]; cnt++; if(summ > sum/2) break;}
   cout<<cnt<<endl;
    
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	#ifdef SIEVE
		sieve();
	#endif
	#ifdef NCR
		init();
	#endif
// 	cin>>t;
	int t=1;
	while(t--) solve();
	return 0;
}
