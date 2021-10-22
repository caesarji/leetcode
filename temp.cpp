#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y=0;
    while (y < 100)
    {
        int x=y; 

        int bit = 0;
        while (x > 0)
        {
            x /= 2;
            bit++;
        }
        cout << y << " " << bit << endl;
        y++;
    }
}

// 1010