FIFO(First In First Out)

#include<stdio.h>
int main()
{
    int i,j,n,a[50],frame[10],no,k,avail,count=0;
    printf("\nENTER THE NUMBER OF REQUESTS : ");
    scanf("%d",&n);
    printf("\nENTER THE REQUESTED PAGE NUMBER : ");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("\nENTER THE NUMBER OF FRAMES : ");
    scanf("%d",&no);
    for(i=0;i<no;i++)
        frame[i]= -1;
    j=0;
    printf("\nref string\t page frames\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t\t",a[i]);
        avail=0;
        for(k=0;k<no;k++)
            if(frame[k]==a[i])
                avail=1;
            if (avail==0)
            {
                frame[j]=a[i];
                j=(j+1)%no;
                count++;
                for(k=0;k<no;k++)
                printf("%d\t",frame[k]);
            }
        printf("\n");
    }
    printf("\nNo. of page Fault is : %d\n\n",count);
    return 0;
}
/*
12
2 3 2 1 5 2 4 5 3 2 5 2
3
*/



LRU(Least recently Used)
 
#include<stdio.h>
int findLRU(int time[], int n)
{
    int i, minimum = time[0], pos = 0;
    for(i = 1; i < n; ++i)
    {
        if(time[i] < minimum)
        {
            minimum = time[i];
            pos = i;
        }
    }
    return pos;
}
 
int main()
{
    int no_of_frames, no_of_pages, frames[10], pages[30], counter = 0, time[10], flag1, flag2, i, j, pos, faults = 0;
    printf("\nENTER THE NUMBER OF FRAMES : ");
    scanf("%d", &no_of_frames);
    printf("ENTER THE NUMBER OF REQUESTS : ");
    scanf("%d", &no_of_pages);
    printf("ENTER THE REQUESTED PAGE NUMBER : ");
    for(i = 0; i < no_of_pages; ++i)
    {
        scanf("%d", &pages[i]);
    }
    
    for(i = 0; i < no_of_frames; ++i)
    {
        frames[i] = -1;
    }
    
    for(i = 0; i < no_of_pages; ++i)
    {
        flag1 = flag2 = 0;
        for(j = 0; j < no_of_frames; ++j)
        {
            if(frames[j] == pages[i])
            {
                counter++;
                time[j] = counter;
                flag1 = flag2 = 1;
                break;
            }
        }
        if(flag1 == 0)
        {
            for(j = 0; j < no_of_frames; ++j)
            {
                if(frames[j] == -1)
                {
                    counter++;
                    faults++;
                    frames[j] = pages[i];
                    time[j] = counter;
                    flag2 = 1;
                    break;
                }
            }
        }

        if(flag2 == 0)
        {
            pos = findLRU(time, no_of_frames);
            counter++;
            faults++;
            frames[pos] = pages[i];
            time[pos] = counter;
        }

        printf("\n");

        for(j = 0; j < no_of_frames; ++j)
        {
            printf("%d\t", frames[j]);
        }
    }
    printf("\n\nNo. of page Fault is : %d\n\n", faults);
    return 0;
}
/*
3
12
2 3 2 1 5 2 4 5 3 2 5 2
*/



LFU(Least Frequently Used)

#include<stdio.h>
int main()
{
    int f,p;
    int pages[50],frame[10],hit=0,count[50],time[50];
    int i,j,page,flag,least,minTime,temp;
    printf("\nENTER THE NUMBER OF FRAMES : ");
    scanf("%d",&f);
    printf("ENTER THE NUMBER OF REQUESTS : ");
    scanf("%d",&p);
    for(i=0;i<f;i++)
    {
        frame[i]=-1;
    }
    for(i=0;i<50;i++)
    {
        count[i]=0;
    }
    printf("ENTER THE REQUESTED PAGE NUMBER : ");
    for(i=0;i<p;i++)
    {
        scanf("%d",&pages[i]);
    }
    printf("\n");
    for(i=0;i<p;i++)
    {
        count[pages[i]]++;
        time[pages[i]]=i;
        flag=1;
        least=frame[0];
        for(j=0;j<f;j++)
        {
            if(frame[j]==-1 || frame[j]==pages[i])
            {
                if(frame[j]!=-1)
                {
                    hit++;
                }
                flag=0;

                frame[j]=pages[i];
                break;
            }
            if(count[least]>count[frame[j]])
            {
            least=frame[j];
            }
        }
        if(flag)
        {
            minTime=50;
            for(j=0;j<f;j++)
            {
                if(count[frame[j]]==count[least] && time[frame[j]]<minTime)
                {
                    temp=j;
                    minTime=time[frame[j]];
                }
            }
            count[frame[temp]]=0;
            frame[temp]=pages[i];
        }
        for(j=0;j<f;j++)
        {
            printf("%d   ",frame[j]);
        }
        printf("\n");
    }
    printf("\nNo. of page Fault is : %d\n\n",hit);
    return 0;
}
/*
3
12
2 3 2 1 5 2 4 5 3 2 5 2
*/



MFU(Most Frequently Used)

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int hit=0,miss=0,i,j,noPages,noFrames,min;
    int frames[10],pages[20];
    int flag=0,flag1=0,flag2=0;
    int flagFound=0;
    int count=0;
    int frameAge[50],frameFREQ[50];
    printf("\nENTER THE NUMBER OF FRAMES : ");
    scanf("%d",&noFrames);
    printf("ENTER THE NUMBER OF REQUESTS : ");
    scanf("%d",&noPages);

    printf("ENTER THE REQUESTED PAGE NUMBER : ");

    for(i=0;i<noPages;i++)
    {
        scanf("%d",&pages[i]);
    }

    printf("\n");

    for(i=0;i<noFrames;i++)
    {
        frames[i]=-1;
        frameAge[i]=-1;
    }

    for(j=0;j<noFrames;j++)
    {
        frameFREQ[j]=0;
    }


    for(j=0;j<noPages;j++)
    { 
        int index;
        printf(" page:%d   ",pages[j] );
        flagFound=0,flag=0,flag2=0;

        for(i=0;i<noFrames;i++)
        {
            if(frames[i]==pages[j])
            {	
                flagFound=1;
                flag=1;
                index=i;
                printf("hit ");  
                hit++;
                break;
            }
        } 

        if(flagFound==0)          //if frame not found and empty frame available
        {
            for(i=0;i<noFrames;i++)
            {
                if(frames[i]==-1)
                {
                    frames[i]=pages[j];
                    flag=1;
                    count++;
                    frameAge[i]=count;
                    miss++;
                    frameFREQ[i]=1;
                    printf("miss ");
                    break;    
                }  
            } 

            if(flag==0) 
            {
                int bestmfu=0;
                for(i=0;i<noFrames;i++)
                {
                    if(frameFREQ[i]>frameFREQ[bestmfu])
                    bestmfu=i;
                }
                frames[bestmfu]=pages[j];
                miss++;
                printf("miss ");
                frameFREQ[bestmfu]=1;
            }
        }  
        else
        {
            frameFREQ[index]++;
                
        }

        for(i=0;i<noFrames;i++)
        {
            printf("   %d ",frames[i] );
        }       
        printf("\n");

    }
    printf("\nNo. of page Fault is : %d\n\n",miss );
    return 0;
}
/*
3
12
2 3 2 1 5 2 4 5 3 2 5 2
*/