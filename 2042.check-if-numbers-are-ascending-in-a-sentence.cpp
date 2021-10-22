/*
 * @lc app=leetcode id=2042 lang=cpp
 *
 * [2042] Check if Numbers Are Ascending in a Sentence
 */

// @lc code=start
class Solution
{
public:
    bool areNumbersAscending(string str)
    {
        stringstream s(str);
        string word;
        // cout << (int)'0' << endl;
        // cout << (int)'9' << endl;
        vector<int> v;
        while (s >> word)
        {
            if((int)word[0] >=48 &&  (int)word[0] <=57){
                v.push_back(stoi(word));
            }
            // cout << (int)word[0] << endl;
        }
        int prev=-1;
        for( auto c:v){
            cout<<c<<" ";
            
            if(c<=prev) return false;
            prev=c;
            
        }

        return true;
    }
};
// @lc code=end
