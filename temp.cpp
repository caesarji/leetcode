#include <bits/stdc++.h>
using namespace std;


vector<int> findDuplicates(vector<int> &a)
{
    set<int> v;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[i] == i + 1)
            continue;
        if (a[i] == a[a[i] - 1])
        {
            v.insert(a[i]);
        }
        else
        {
            cout<<a[i]<<" "<<a[a[i] - 1]<<endl;
            swap(a[i], a[a[i] - 1]);
            i--;
        }
    }
    vector<int> ans;
    for (auto x : v)
    {
        ans.push_back(x);
        // s.pop()
    }
    v.clear();
    return ans;
}

// i=0
// 2 3 2 4 8 7 3 1
// 1 2 3 4 5 6 7 8





int main()
{
    vector<int>a(8);
    for( int i=0 ; i<8 ; i++){
        cin>>a[i];
    }
    vector<int>ans=findDuplicates(a);
    for(auto c:ans){
        cout<<c<<" ";
    }
}

// 1010