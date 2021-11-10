#include <bits/stdc++.h>
using namespace std;

int countPageFaults(int pages[], int n, int cap)
{
    unordered_set<int> s;
    queue<int> indexes;
    int page_faults = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.size() < cap)
        {
            if (s.find(pages[i]) == s.end())
            {
                s.insert(pages[i]);
                page_faults++;
                indexes.push(pages[i]);
            }
        }
        else
        {
            if (s.find(pages[i]) == s.end())
            {
                int val = indexes.front();
                indexes.pop();
                s.erase(val);
                s.insert(pages[i]);
                indexes.push(pages[i]);
                page_faults++;
            }
        }
    }

    return page_faults;
}

int main()
{

    int n;
    cin >> n;
    int pages[n];
    for (int &c : pages)
        cin >> c;
    int cap;
    cin >> cap;
    cout << countPageFaults(pages, n, cap);
    return 0;
}
