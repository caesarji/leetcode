#include <pthread.h>
#include <iostream>
using namespace std;

#define N 2
bool flag[2] = {false, false};
int turn = 0;
int global = 100;

void *func0(void *param)
{
    for (int i = 0; i < N; i++)
    {
        cout << "some code p0\n";

        flag[0] = true;
        turn = 1;
        while (flag[1] && turn == 1)
        {
            cout << "p0 wait  ";
        };

        cout << "\nEntering critical section\n";
        global += 100;
        cout << "\nAdding 100:" << global << '\n';
        cout << "\nExiting critical section\n";

        flag[0] = false;

        cout << "some code p0\n";
    }

    return (void *)NULL;
}

void *func1(void *param)
{
    for (int i = 0; i < N; i++)
    {
        cout << "some code p1\n";

        flag[1] = true;
        turn = 0;
        while (flag[0] && turn == 0)
        {
            cout << "p1 wait  ";
        };

        cout << "\nEntering critical section\n";
        global -= 75;
        cout << "\nRemoving 75: " << global << "\n";
        cout << "\nExiting critical section\n";

        flag[1] = false;

        cout << "some code p1\n";
    }
    return (void *)NULL;
}

int main()
{

    pthread_t thread_0, thread_1;

    pthread_create(&thread_0, NULL, func0, NULL);
    pthread_create(&thread_1, NULL, func1, NULL);

    pthread_join(thread_0, NULL);
    pthread_join(thread_1, NULL);

    return 0;
}
