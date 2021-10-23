#include <bits/stdc++.h>
using namespace std;

struct edge
{
    int a, b, w;
};

bool comp(edge e1, edge e2)
{
    return e1.w < e2.w;
}
int ar[10005];
int find(int a)
{
    if (ar[a] < 0)
        return a;
    return ar[a] = find(ar[a]);
}
void join(int x, int y)
{
    ar[x] = min(ar[x], ar[y]);
    ar[y] = x;
}

int main()
{
    int n, m;
    cin >> n >> m;
    edge e[m];
    for (int i = 0; i < m; i++)
    {
        cin >> e[i].a >> e[i].b >> e[i].w;
    }
    sort(e, e + m, comp);

    for (int i = 1; i <= n; i++)
    {
        ar[i] = -i;
    }
    int sum=0;
    for (int i = 0; i < m; i++)
    {

        // cout<<"here"<<endl;
        int x = find(e[i].a);
        int y = find(e[i].b);
        // cout<<"here"<<endl;
        if (x != y)
        {
            sum += e[i].w;
            join(x, y);
        }
        // cout<<"here"<<endl;
    }
    cout<< sum<<endl;
}