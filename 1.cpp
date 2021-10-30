#include<bits/stdc++.h>
using namespace std;
int main()
{
    int bno, pno;
    bool found=false;
    cout<<"Enter no. of blocks: ";
    cin>>bno;
    int bsize[bno],flags[bno], allocation[bno], i, j;
    for(i = 0; i < bno; i++)
    {
        flags[i] = 0;
        allocation[i] = -1;
    }
    cout<<"\nEnter size of each block: ";
    for(i = 0; i < bno; i++)
        cin>>bsize[i];
    cout<<"\nEnter no. of processes: ";
    cin>>pno;
    int psize[pno];
    cout<<"\nEnter size of each process: ";
    for(i = 0; i < pno; i++)
        cin>>psize[i];
    cout<<endl;
    for(i = 0; i < pno; i++)
    {
        found=false;
        for(j = 0; j < bno; j++)
            if(flags[j] == 0 && bsize[j] >= psize[i])
            {
                found=true;
                allocation[j] = i;
                flags[j] = 1;
                break;
            }
        if(!found)
            cout<<"Process "<<i+1<<" cant be accomodated\n";
    }
    cout<<"\nBlock no.\tsize\t\tprocess no.\t\tsize";
    for(i = 0; i <bno; i++)
    {
        cout<<"\n"<< i+1<<"\t\t"<<bsize[i]<<"\t\t";
        if(flags[i] == 1)
            cout<<allocation[i]+1<<"\t\t\t"<<psize[allocation[i]];
        else
            cout<<"Not allocated block memory";
    }
    cout<<"\n\n";
    return 0;
}