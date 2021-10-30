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
    int lowest=INT_MIN,allc=-1;
    for(i = 0; i < pno; i++)
    {
        found=false;
        for(j = 0; j < bno; j++)
            if(flags[j] == 0 && bsize[j] >= psize[i])
                if(lowest<bsize[j])
                {
                    found=true;
                    lowest=bsize[j];
                    allc=j;
                }
        if(found)
        {
          allocation[allc]=i;
            flags[allc]=1;
        }
        else
            cout<<"Process "<<i+1<<" cant be accomodated\n";
        lowest=INT_MIN;
        allc=-1;
    }

    cout<<"\nBlock no.\tsize\t\tprocess no.\t\tsize";
    for(i = 0; i < bno; i++)
    {
        cout<<"\n"<< i+1<<"\t\t"<<bsize[i]<<"\t\t";
        if(flags[i] == 1)
            cout<<allocation[i]+1<<"\t\t\t"<<psize[allocation[i]];
        else
            cout<<"Not allocated";
    }

    cout<<"\n\n";
    return 0;
}