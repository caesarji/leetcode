/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
public:
    void helper(vector<string>& ans , int n, int o, int c , string s){
        cout<<o<<"  "<<c<<endl;
        if(s.size()==2*n){
            ans.push_back(s);
            return;
        }
        
        if(o<n){
            s+='(';
            helper(ans, n, o+1 , c , s);
            s.erase(s.size(), s.size());
        }
        if(c<o){
            s+=')';
            helper(ans, n, o , c+1 , s);
            s.erase(s.size(), s.size());
        }
        
    } 
    vector<string> generateParenthesis(int n) {
       vector<string> ans;
        string s="";
        helper(ans, n , 0, 0 , s);
        return ans;
    }
};
// @lc code=end

