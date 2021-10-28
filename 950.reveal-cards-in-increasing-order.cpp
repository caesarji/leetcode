/*
 * @lc app=leetcode id=950 lang=cpp
 *
 * [950] Reveal Cards In Increasing Order
 */

// @lc code=start
class Solution
{
public:
    vector<int> deckRevealedIncreasing(vector<int> &d)
    {

        sort(d.begin() , d.end());
        queue<int> q;
        int n=d.size();
        for( int i=0 ; i<n ; i++)
            q.push(i);
        int flip=1;
        vector<int>ans(n);
        int k=0;
        
        while(!q.empty()){
            if(flip){
                ans[q.front()]=d[k++];
                q.pop();
            }
            else{
                q.push(q.front());
                q.pop();
            }
            flip^=1;
        }
        return ans;
    }
};
// @lc code=end

// 17,13,11,2,3,5,7

// 2 3 5 7 11 13 17
// 1 2 3 4 5 6 7 



