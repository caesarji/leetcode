#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

vector<int> fun(vector<int> a, int n)
{
    // return a;
    unordered_map<int, int> r, l;
    // unordered_map<int,int> l;
    // map<int,int> l;
    set<int> rs, ls;
    // set<int> ls;
    // vector<int> ansx;
    // vector<int> ansy;
        for (int i = 0; i < n; i++)
        {
            r[a[i]]++;
            rs.insert(a[i]);
        }
    // for( auto c:r){
    //     cout<<c.first<<" "<<c.second<<endl;
    // }
    // int uni = rs.size();
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        ans.push_back(-rs.size());
        // ansx.push_back(abs(uni-int(rs.size())));
        r[a[i]]--;
        if (r[a[i]] == 0)
        {
            rs.erase(a[i]);
        }
        l[a[i]]++;
        ls.insert(a[i]);
        ans[i] -= (-ls.size());
        ans[i] = abs(ans[i]);
        // ansy.push_back(abs(uni-int(ls.size())));
        // cout<<ans[i]<<" ";
    }
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     ans.push_back(abs(ansx[i]-ansy[i]));
    // }
    return ans;
}
vector<int> solve(int n, vector<int> a)
{
    // Write your code here
    return fun(a, n);
    //    vector<int> =fun(a,n);
    //    reverse(a.begin(),a.end());
    //    vector<int> y=fun(a,n);
    //    reverse(y.begin(),y.end());

    //    return ans;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i_A = 0; i_A < N; i_A++)
        {
            cin >> A[i_A];
        }

        vector<int> out_;
        out_ = solve(N, A);
        cout << out_[0];
        for (int i_out_ = 1; i_out_ < out_.size(); i_out_++)
        {
            cout << " " << out_[i_out_];
        }
        cout << "\n";
    }
}