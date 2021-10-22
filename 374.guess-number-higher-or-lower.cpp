/*
 * @lc app=leetcode id=374 lang=cpp
 *
 * [374] Guess Number Higher or Lower
 */

// @lc code=start
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
       
        long long  h= n;
        long long l=1;

        while(l<=h){
            long long mid= (l+h)/2;
            int x=guess(mid);
            cout<<mid<<" "<<x<<endl;
            if(x==0) return mid;
            else if(x==-1){
                h=mid-1;

            }

            else l=mid+1;
        }
        

        return n ;

    }
};
// @lc code=end

