/*
 * @lc app=leetcode id=451 lang=cpp
 *
 * [451] Sort Characters By Frequency
 */

// @lc code=start
#include <bits/stdc++.h>
class Solution {
public:
    string frequencySort(string s) {
        map<char , int> m;

        for( auto c:s){
            m[c]++;
        }
        s.erase();
        multimap<int , char> mm;
        for( auto c:m){
            mm.insert({c.second, c.first});
        }
        for(auto c:mm){
            cout<<c.first<<" "<<c.second<<endl;
            int freq=c.first;
            while(freq--){
                s+=c.second;
            }
        }
        reverse(s.begin() ,s.end() );
        return s;
        
    }
};
// @lc code=end

