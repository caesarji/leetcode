#include<iomanip>
#include <cassert>
#include <cstring>
#include <stack>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <string>
#include <sstream>
#include <complex>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <functional>
#include <unordered_set>
#include <set>
#include <map>
#include <list>
#include <queue>
#include <vector>
#include <bitset>
#include <random>
#include <unordered_map>
#define ll long long
#define Unique(c) (c).resize(unique(all(c))-(c).begin())
#define   all(n) n.begin(),n.end()
#define F first
#define S second
#define endl '\n'
#define pb  push_back
const int M    = 1e9 + 7;
using namespace std;
const int Inf           = (int)2e9 + 5;
const ll  Lnf           = (ll)2e18 + 5;
const int N             = 5e5 + 5;
const int NN            = 1e6 + 5;
 
#define error(args...) {vector<string>_v=split(#args,',');err(_v.begin(),args);cout<<endl;}
vector<string> split(const string &s, char c) {vector<string>v; stringstream ss(s); string x;while (getline(ss, x, c))v.emplace_back(x); return move(v);} void err(vector<string>::iterator it) {}
template<typename T, typename... Args>void err(vector<string>::iterator it, T a, Args...args) {cout << it->substr((*it)[0] == ' ', it->length()) << " = " << a << " "; err(++it, args...);}
 
 
int solve() 
{
 
  //Test
 
   int n;
  cin>>n;
 
  string s;
  cin>>s;
  Unique(s);
  n = s.size();
 
  if(n%3 == 2){
    cout<<"RAMADHIR"<<endl;
  }else{
    cout<<"SAHID"<<endl;
  }
 
  return 0;
  //error();
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int test = 1;
  cin>>test;
  while (test--)solve();return 0;
}