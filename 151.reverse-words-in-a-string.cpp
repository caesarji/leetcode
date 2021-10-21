/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
// class Solution {
// public:
//     string reverseWords(string s) {
//         reverse(s.begin(), s.end());
//         int l = 0, r = 0, i = 0, n = s.size();
//         while (i < n) {
//             while (i < n && s[i] != ' ')
//                 s[r++] = s[i++];

//             if (l < r) { // if we can find a non-empty word then
//                 reverse(s.begin() + l, s.begin() + r); // reverse current word
//                 if (r == n) break;
//                 s[r++] = ' '; // set empty space
//                 l = r;
//             }
//             ++i; // now i == n or s[i] == ' ', so we skip that character!
//         }
//         if (r > 0 && s[r-1] == ' ') --r; // skip last empty character if have
//         s.resize(r);
//         return s;
//     }
// };

/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
// class Solution {
// public:
//     string reverseWords(string s) {
//         reverse(s.begin(), s.end());
//         int l = 0, r = 0, i = 0, n = s.size();
//         while (i < n) {
//             while (i < n && s[i] != ' ')
//                 s[r++] = s[i++];

//             if (l < r) { // if we can find a non-empty word then
//                 reverse(s.begin() + l, s.begin() + r); // reverse current word
//                 if (r == n) break;
//                 s[r++] = ' '; // set empty space
//                 l = r;
//             }
//             ++i; // now i == n or s[i] == ' ', so we skip that character!
//         }
//         if (r > 0 && s[r-1] == ' ') --r; // skip last empty character if have
//         s.resize(r);
//         return s;
//     }
// };

class Solution
{
public:
    string reverseWords(string s)
    {
        reverse(s.begin() , s.end());
        int n=s.size();
        int l =0, r=0;
        int i=0 ;
        while(i<n ){

            while(i<n && s[i]!=' '){
                s[r++]= s[i++];
            }

            if(l<r){
                reverse(s.begin() + l , s.begin() + r);
                s[r++] = ' ';
                l=r;
            }
            i++;
        }

        if(s[r-1]==' ') r--;
        s.resize(r);
        return s;


    }
};
// @lc code=end

// @lc code=end
