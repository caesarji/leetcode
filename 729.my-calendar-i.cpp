/*
 * @lc app=leetcode id=729 lang=cpp
 *
 * [729] My Calendar I
 */

// @lc code=start

class MyCalendar
{
public:
    struct data
    {
        int f, s;
    };
    vector<data> v;
    MyCalendar()
    {
        v.clear();
    }

    bool book(int s, int e)
    {
        // e--;
        if (v.size() == 0)
        {
            v.push_back({s, e});
            return true;
        }
        else
        {
            for (int i = 0; i < v.size(); i++)
            {
                int fr = v[i].f;
                int sc = v[i].s;
                if (fr < e and sc >= e)
                    return false;
                if (fr <= s and sc > s)
                    return false;
                if (s <= fr and e >= sc)
                    return false;
            }
            v.push_back({s, e});
        }
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
// @lc code=end
